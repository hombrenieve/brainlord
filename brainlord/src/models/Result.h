#ifndef MODELS_RESULT_H_
#define MODELS_RESULT_H_
#include <vector>
#include "Success.h"

namespace models {
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
}
#endif
