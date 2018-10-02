#include "Color.h"
#include <iostream>
#include <sstream>

Color::Color(const std::string& name) :
	name(toUpper(name)) {
}

Color::~Color() {
}

std::string Color::getName() {
	return name;
}

std::string Color::toUpper(const std::string& original) {
	std::stringstream sstr;
	sstr << std::uppercase << original;
	return sstr.str();
}
