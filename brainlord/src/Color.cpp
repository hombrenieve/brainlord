#include "Color.h"
#include <iostream>
#include <sstream>

Color Color::RED("red");
Color Color::BLUE("blue");
Color Color::YELLOW("yellow");
Color Color::GREEN("green");
Color Color::PINK("pink");
Color Color::ORANGE("orange");

Color::Color(const std::string& name) :
	name(toUpper(name)) {
}

Color::~Color() {
}

std::string Color::getName() const {
	return name;
}

std::string Color::toUpper(const std::string& original) {
	std::stringstream sstr;
	sstr << std::uppercase << original;
	return sstr.str();
}

std::array<Color, Color::NUM_COLORS> Color::values() {
    return { RED, BLUE, GREEN, PINK, YELLOW, ORANGE };
}

Color* Color::findColor(std::string substr) {
    std::string upperSubstr = Color::toUpper(substr);
    for(auto& c: Color::values()) {
        if(c.getName().find(upperSubstr) != std::string::npos) {
            return &c;
        }
    }
    return nullptr;
}

void Color::print() const {
	std::cout << this->getName();
}


Color read() {
	std::string colorName;
	Color* color = nullptr;
	do {
		std::cin >> colorName;
		color = Color::findColor(colorName);
		if(not color) {
			std::cerr << "Incorrect color" << std::endl;
		}
	}	while(not color);
	return *color;
}
