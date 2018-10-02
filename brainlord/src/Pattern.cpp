#include "Pattern.h"
#include <random>
#include <algorithm>
#include <iostream>

const ColorSet Pattern::validColors;

Pattern::Pattern() {
	for(int i = 0; i < LENGTH; i++) {
		pattern[i] = validColors.getRandom();
	}
}

Pattern::Pattern(const row& pattern) :
	pattern(pattern) {
}

Pattern::~Pattern() {
}

bool Pattern::isValid(const Color& color) {
	return validColors.isValid(color);
}

std::ostream& operator <<(std::ostream& out, const Pattern& pattern) {
	out << "(";
	for(int i = 0; i < LENGTH; i++) {
		out << " " << pattern.pattern[i].getName();
	}
	out << " )";
	return out;
}
