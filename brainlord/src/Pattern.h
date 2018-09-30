#ifndef PATTERN_H_
#define PATTERN_H_
#include "FeedBack.h"
#include <vector>

class Pattern {
public:
	static const std::vector<std::string> validColors;
	static const int SIZE = 4;
	Pattern();
	Pattern(const std::vector<int> pattern);
	Pattern(const char* pattern);
	virtual ~Pattern();
	FeedBack check(Pattern guess);
private:
	std::vector<int> pattern;
	bool isValid(char character);
};

#endif /* PATTERN_H_ */
