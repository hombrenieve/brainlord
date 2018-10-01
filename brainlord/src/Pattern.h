#ifndef PATTERN_H_
#define PATTERN_H_
#include "Row.h"
#include <vector>

using ColorSet = std::vector<std::string>;

class Pattern;

std::ostream& operator<< (std::ostream &out, Pattern const& pattern);

class Pattern {
public:
	friend std::ostream& operator<< (std::ostream &out, Pattern const& pattern);

	static const ColorSet validColors;
	static bool isValid(char character);
	Pattern();
	Pattern(const Row& pattern);
	operator Row();
	virtual ~Pattern();
private:
	Row patternRow;

};

#endif
