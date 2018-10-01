#ifndef FEEDBACK_H_
#define FEEDBACK_H_
#include "Row.h"

class FeedBack {
public:
	FeedBack(const Row& guess, const Row& secretKey);
	virtual ~FeedBack();
	bool isVictory();

	int getRightlyColoredCounter() const;

	int getRightlyPositionedCounter() const;

private:
	static const Row::color rightPositionedColor = 'b';
	static const Row::color rightColoredColor = 'w';
	static const Row::color emptyColor = ' ';
	Row feedBackRow;

};

#endif
