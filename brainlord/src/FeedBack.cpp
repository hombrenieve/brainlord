#include "FeedBack.h"

FeedBack::FeedBack(int patternSize) :
	size(patternSize),
	rightlyPositionedCounter(0),
	rightlyColoredCounter(0)
{

}

FeedBack::~FeedBack() {
}

bool FeedBack::isVictory() {
	return rightlyPositionedCounter == size;
}
