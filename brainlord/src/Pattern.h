#ifndef PATTERN_H_
#define PATTERN_H_
#include <vector>
#include "ColorSet.h"

class Pattern;

std::ostream& operator<< (std::ostream &out, Pattern const& pattern);

class Pattern {
public:
	friend std::ostream& operator<< (std::ostream &out, Pattern const& pattern);

	static const ColorSet validColors;
	static const int LENGTH = 4;
	using row=std::vector<Color>;

	Pattern();
	Pattern(const row& pattern);
	const Color& operator[](int i) const;
	virtual ~Pattern();
private:
	row pattern;

};

#endif
