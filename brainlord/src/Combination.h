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

	const storage& getCombination() const;

protected:
	storage& getCombination();

private:
	storage combination;


};

#endif
