#ifndef RESULT_H_
#define RESULT_H_
#include "Success.h"
#include <vector>

class Result : public std::vector<Success> {

public:
	Result();
	virtual ~Result();
	bool isWinner() const;

	unsigned int getRightlyColoredCounter() const;

	unsigned int getRightlyPositionedCounter() const;

	void print() const;
};

#endif
