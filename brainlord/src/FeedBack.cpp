#include "FeedBack.h"

FeedBack::FeedBack(const Row& guess, const Row& secretKey)
{
	for(int i = 0; i < Row::LENGTH; i++) {
		if(guess[i] == secretKey[i]) {
			feedBackRow[i] = rightPositionedColor;
		} else {
			feedBackRow[i] = emptyColor;
		}
	}
	for(int i = 0; i < Row::LENGTH; i++) {
		if(feedBackRow[i] == emptyColor) {
			for(int j = 0; j < Row::LENGTH; j++) {
				if(guess[i] == secretKey[j] and feedBackRow[j] == emptyColor) {
					feedBackRow[i] = rightColoredColor;
				}
			}
		}
	}
}

FeedBack::~FeedBack() {
}

bool FeedBack::isVictory() {
	return getRightlyPositionedCounter() == Row::LENGTH;
}

int FeedBack::getRightlyColoredCounter() const
{
	return feedBackRow.countElements(rightColoredColor);
}

int FeedBack::getRightlyPositionedCounter() const
{
	return feedBackRow.countElements(rightPositionedColor);
}
