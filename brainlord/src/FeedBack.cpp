#include "FeedBack.h"
#include <algorithm>

FeedBack::FeedBack(const Pattern& guess, const Pattern& secretKey)
{
	for(int i = 0; i < Pattern::LENGTH; i++) {
		if(guess[i] == secretKey[i]) {
			feedBackRow[i] = Marker::BLACK;
		} else {
			feedBackRow[i] = Marker::EMPTY;
		}
	}
	for(int i = 0; i < Pattern::LENGTH; i++) {
		if(feedBackRow[i] == Marker::EMPTY) {
			for(int j = 0; j < Pattern::LENGTH; j++) {
				if(guess[i] == secretKey[j] and feedBackRow[j] == Marker::EMPTY) {
					feedBackRow[i] = Marker::WHITE;
                    break;
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

unsigned int FeedBack::getRightlyColoredCounter() const
{
	return std::count(feedBackRow.begin(), feedBackRow.end(), Marker::WHITE);
}

unsigned int FeedBack::getRightlyPositionedCounter() const
{
	return std::count(feedBackRow.begin(), feedBackRow.end(), Marker::BLACK);
}
