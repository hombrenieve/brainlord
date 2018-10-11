#ifndef MODELS_COMBINATION_H_
#define MODELS_COMBINATION_H_
#include <array>
#include "Color.h"

namespace models {
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
}

#endif
