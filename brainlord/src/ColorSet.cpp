#include "ColorSet.h"
#include <random>
#include <algorithm>

ColorSet::ColorSet() :
	palette{ {"red"}, {"yellow"}, {"pink"}, {"blue"}, {"green"}, {"orange"} }
{
}

ColorSet::~ColorSet() {
}

Color ColorSet::getRandom() const {
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, palette.size()-1);

	return palette[dist(mt)];
}

bool ColorSet::isValid(const Color& color) const {
	return std::find(palette.begin(), palette.end(), color) != palette.end();
}

const ColorSet::colors& ColorSet::getPalette() const {
	return palette;
}
