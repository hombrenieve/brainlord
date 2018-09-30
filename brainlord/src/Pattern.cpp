#include "Pattern.h"
#include <random>
#include <algorithm>

const std::vector<std::string> Pattern::validColors  = { "RED", "GREEN", "BLUE", "WHITE", "YELLOW", "PINK" };

Pattern::Pattern() {
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, validColors.size()-1);

	for(int i = 0; i < SIZE; i++) {
		pattern.push_back(dist(mt));
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

Pattern::~Pattern() {
}

FeedBack Pattern::check(Pattern guess) {
	//TODO check preconditions
	FeedBack feedBack(SIZE);
	for(int i = 0; i < pattern.size(); i++) {
		if(pattern[i] == guess.pattern[i]) {
			feedBack.increaseRightlyPositionedCounter();
		} else {
			if(std::find(pattern.begin(), pattern.end(), guess.pattern[i]) != pattern.end()) {
				feedBack.increaseRightlyColoredCounter();
			}
		}
	}
	return feedBack;
}



bool Pattern::isValid(char character) {
	for(auto& color: validColors) {
		if(color[0] == character) {
			return true;
		}
	}
	return false;
}



