#ifndef COLORSET_H_
#define COLORSET_H_
#include <vector>

#include "Color.h"

class ColorSet {
public:
	using colors=std::vector<Color>;
	ColorSet();
	virtual ~ColorSet();
	Color getRandom() const;
	bool isValid(const Color& color) const;
	const colors& getPalette() const;


private:
	colors palette;
};

#endif
