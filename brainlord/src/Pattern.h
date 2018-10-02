#ifndef PATTERN_H_
#define PATTERN_H_
#include "Row.h"
#include <vector>
#include "ColorSet.h"

class Pattern;

std::ostream& operator<< (std::ostream &out, Pattern const& pattern);

class Pattern {
public:
	using row=std::vector<Color>;
	friend std::ostream& operator<< (std::ostream &out, Pattern const& pattern);

	static const ColorSet validColors;
	static const int LENGTH = 4;
	static bool isValid(const Color& color);
	Pattern();
	Pattern(const row& pattern);
	virtual ~Pattern();
private:
	row pattern;

};

#endif
