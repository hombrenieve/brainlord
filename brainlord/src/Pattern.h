/*
 * Pattern.h
 *
 *  Created on: Sep 29, 2018
 *      Author: ediapab
 */

#ifndef PATTERN_H_
#define PATTERN_H_
#include "FeedBack.h"
#include <vector>

class Pattern {
	static const char validChars[];
public:
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
