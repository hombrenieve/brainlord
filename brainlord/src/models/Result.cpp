#include "Result.h"

#include <algorithm>
#include <iostream>
#include <vector>

#include "Success.h"

using namespace models;

Result::Result(int size) : resultSuperClass(size, Success::EMPTY)
{ }

Result::~Result() {
}

bool Result::isWinner() const {
	return getRightlyPositionedCounter() == this->size();
}

unsigned int Result::getRightlyColoredCounter() const
{
	return std::count(this->begin(), this->end(), Success::WHITE);
}

unsigned int Result::getRightlyPositionedCounter() const
{
	return std::count(this->begin(), this->end(), Success::BLACK);
}

void Result::print() const {
	std::cout << "Black: " << this->getRightlyPositionedCounter() << ", "
			<< "White: " << this->getRightlyColoredCounter();
}
