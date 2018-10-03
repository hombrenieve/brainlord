#include "FeedBack.h"
#include <algorithm>

FeedBack::FeedBack(const Pattern& guess, const Pattern& secretKey)
{
	for(int i = 0; i < Pattern::LENGTH; i++) {
		if(guess.at(i) == secretKey.at(i)) {
			feedBackRow[i] = Marker::BLACK;
		} else {
			feedBackRow[i] = Marker::EMPTY;
		}
	}
	for(int i = 0; i < Pattern::LENGTH; i++) {
		if(feedBackRow[i] == Marker::EMPTY) {
			for(int j = 0; j < Pattern::LENGTH; j++) {
				if(guess.at(i) == secretKey.at(j) and feedBackRow[j] == Marker::EMPTY) {
					feedBackRow[i] = Marker::WHITE;
				}
			}
		}
	}
}

FeedBack::~FeedBack() {
}

bool FeedBack::isVictory() {
	return getRightlyPositionedCounter() == feedBackRow.size();
}

int FeedBack::getRightlyColoredCounter() const
{
	return std::count(feedBackRow.begin(), feedBackRow.end(), Marker::WHITE);
}

int FeedBack::getRightlyPositionedCounter() const
{
	return std::count(feedBackRow.begin(), feedBackRow.end(), Marker::BLACK);
}
