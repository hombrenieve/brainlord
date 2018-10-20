#ifndef MODELS_COMBINATION_H_
#define MODELS_COMBINATION_H_
#include <vector>
#include "Color.h"

namespace models {
using CombinationStorage=std::vector<Color>;

class Combination : public CombinationStorage{
public:
	static const int COMBINATION_SIZE = 4;

	Combination();
	Combination(const CombinationStorage& combination);
	virtual ~Combination();

};
}

#endif
