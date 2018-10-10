#ifndef RESULT_H_
#define RESULT_H_
#include "Success.h"
#include <vector>

using resultSuperClass=std::vector<Success>;

class Result : public resultSuperClass {
public:
	Result(int size);
	virtual ~Result();
	bool isWinner() const;

	unsigned int getRightlyColoredCounter() const;

	unsigned int getRightlyPositionedCounter() const;

	void print() const;
};

#endif
