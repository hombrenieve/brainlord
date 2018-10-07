/*
 * Combination.h
 *
 *  Created on: Oct 7, 2018
 *      Author: ediapab
 */

#ifndef COMBINATION_H_
#define COMBINATION_H_
#include "Color.h"
#include <array>

class Combination {
public:
	static const int COMBINATION_SIZE = 4;
	using storage=std::array<Color, COMBINATION_SIZE>;

	Combination();
	virtual ~Combination();

	void print() const;


private:
	storage combination;

protected:
	storage& getCombination();
	const storage& getCombination() const;

};

#endif /* COMBINATION_H_ */
