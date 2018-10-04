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

std::ostream& operator <<(std::ostream& out, const Pattern& pattern) {
	out << "(";
	for(int i = 0; i < Pattern::LENGTH; i++) {
		out << " " << pattern.pattern[i].getName();
	}
	out << " )";
	return out;
}

const Color& Pattern::operator[](int i) const {
	return pattern[i];
}
