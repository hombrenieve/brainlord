#ifndef COLORSET_H_
#define COLORSET_H_
#include <vector>

#include "Color.h"

class ColorSet {
public:
	const int NUM_COLORS;
	ColorSet();
	virtual ~ColorSet();
	Color getRandom();
	bool isValid(const Color& color);

private:
	const std::vector<Color> palette;
};

#endif
