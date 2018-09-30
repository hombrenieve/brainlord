#ifndef FEEDBACK_H_
#define FEEDBACK_H_

class FeedBack {
public:
	FeedBack(int patternSize);
	virtual ~FeedBack();
	bool isVictory();

	int getRightlyColoredCounter() const {
		return rightlyColoredCounter;
	}

	void increaseRightlyColoredCounter() {
		this->rightlyColoredCounter++;
	}

	int getRightlyPositionedCounter() const {
		return rightlyPositionedCounter;
	}

	void increaseRightlyPositionedCounter() {
		this->rightlyPositionedCounter++;
	}

private:
	int size;
	int rightlyPositionedCounter;
	int rightlyColoredCounter;
};

#endif
