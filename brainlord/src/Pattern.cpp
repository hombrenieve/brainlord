/*
 * Pattern.cpp
 *
 *  Created on: Sep 29, 2018
 *      Author: ediapab
 */

#include "Pattern.h"
#include <random>
#include <algorithm>

const char Pattern::validChars[]  = { 'R', 'G', 'B', 'W', 'Y', 'P' };

Pattern::Pattern() {
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, sizeof(validChars)-1);

	for(int i = 0; i < SIZE; i++) {
		pattern.push_back(validChars[dist(mt)]);
	}
}

Pattern::Pattern(const std::vector<int> pattern) :
	pattern(pattern) {
	//TODO: check preconditions
}

Pattern::Pattern(const char* pattern) {
	//TODO: check preconditions
	for(int i = 0; i < SIZE; i++) {
		this->pattern.push_back(pattern[i]);
	}

}

FeedBack Pattern::check(Pattern guess) {
	return FeedBack();
}

Pattern::~Pattern() {
	// TODO Auto-generated destructor stub
}

bool Pattern::isValid(char character) {
	for(int i=0; i < sizeof(validChars); i++) {
		if(validChars[i] == character) {
			return true;
		}
	}
	return false;
}



