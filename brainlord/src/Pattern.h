/*
 * Pattern.h
 *
 *  Created on: Sep 29, 2018
 *      Author: ediapab
 */

#ifndef PATTERN_H_
#define PATTERN_H_
#include "FeedBack.h"

class Pattern {
public:
	Pattern();
	virtual ~Pattern();
	FeedBack check(Pattern guess);
};

#endif /* PATTERN_H_ */
