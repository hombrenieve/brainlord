#include "Color.h"

#include <iostream>
#include <sstream>
#include <cassert>

using namespace models;

const std::array<Color, Color::NUM_COLORS> Color::palette {
	Color{"red"},
	Color{"blue"},
	Color{"yellow"},
	Color{"green"},
	Color{"pink"},
	Color{"orange"}
};

Color::Color(const std::string& name) :
	name(toUpper(name)) {
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

std::string Color::toUpper(const std::string& original) {
	std::stringstream sstr;
	sstr << std::uppercase << original;
	return sstr.str();
}

const std::array<Color, Color::NUM_COLORS>& Color::values() {
    return palette;
}

const Color* Color::findColor(std::string substr) {
	assert(not substr.empty());
    std::string upperSubstr = Color::toUpper(substr);
    for(auto& c: Color::palette) {
        if(c.getName().find(upperSubstr) != std::string::npos) {
            return &c;
        }
    }
    return nullptr;
}

void Color::print() const {
	std::cout << this->getName();
}


const Color& Color::read() {
	std::string colorName;
	const Color* color = nullptr;
	do {
		std::cin >> colorName;
		color = Color::findColor(colorName);
		if(not color) {
			std::cerr << "Incorrect color" << std::endl;
		}
	}	while(not color);
	return *color;
}
