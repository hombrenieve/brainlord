#include "Color.h"

#include <iostream>
#include <cctype>
#include <cassert>

namespace models {

const Color Color::RED("red");
const Color Color::BLUE("blue");
const Color Color::YELLOW("yellow");
const Color Color::GREEN("green");
const Color Color::PINK("pink");
const Color Color::ORANGE("orange");

const std::array<Color, Color::NUM_COLORS> Color::palette {
	Color::RED,
	Color::BLUE,
	Color::YELLOW,
	Color::GREEN,
	Color::PINK,
	Color::ORANGE
};

Color::Color(const std::string& name) :
	name(name) {
	assert(not name.empty());
}

Color::~Color() {
}

std::string Color::getName() const {
	return name;
}

bool Color::operator ==(const Color& color) const {
	return this->getName() == color.getName();
}

const std::array<Color, Color::NUM_COLORS>& Color::values() {
	return palette;
}

const Color* Color::findColor(char initial) {
	for(auto& c: Color::palette) {
		if(c.getName()[0] == tolower(initial)) {
			return &c;
		}
	}
	return nullptr;
}

void Color::write() const {
	std::cout << this->getName();
}


const Color& Color::read() {
	std::string colorName;
	const Color* color = nullptr;
	do {
		std::cin >> colorName;
		color = Color::findColor(colorName[0]);
		if(not color) {
			std::cerr << "Incorrect color: Use just the first letter!!" << std::endl;
		}
	}	while(not color);
	return *color;
}

}
