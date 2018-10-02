#include "ColorSet.h"
#include <random>
#include <algorithm>

ColorSet::ColorSet() :
	palette{ "red", "yellow", "pink", "blue", "green", "orange" },
	NUM_COLORS(palette.size()) {
}

ColorSet::~ColorSet() {
}

Color ColorSet::getRandom() {
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, palette.size()-1);

	return palette[dist(mt)][0];
}

bool ColorSet::isValid(const Color& color) {
	return std::find(palette.begin(), palette.end(), color) != palette.end();
}
