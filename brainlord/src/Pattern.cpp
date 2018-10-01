#include "Pattern.h"
#include <random>
#include <algorithm>
#include <iostream>

const std::vector<std::string> Pattern::validColors  = { "RED", "GREEN", "BLUE", "WHITE", "YELLOW", "PINK" };

Pattern::Pattern() {
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, validColors.size()-1);

	for(int i = 0; i < Row::LENGTH; i++) {
		patternRow[i] = validColors[dist(mt)][0];
	}
}

Pattern::Pattern(const Row& pattern) :
	patternRow(pattern) {
}

Pattern::~Pattern() {
}

Pattern::operator Row() {
	return patternRow;
}

bool Pattern::isValid(char character) {
	for(auto& color: validColors) {
		if(color[0] == character) {
			return true;
		}
	}
	return false;
}

std::ostream& operator <<(std::ostream& out, const Pattern& pattern) {
	out << "(";
	for(int i = 0; i < Row::LENGTH; i++) {

		out << " ";
		for(auto color: Pattern::validColors) {
			if(color[0] == pattern.patternRow[i]) {
				out << color;
				break;
			}
		}
	}
	out << " )";
	return out;
}
