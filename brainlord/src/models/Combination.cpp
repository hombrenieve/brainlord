#include "Combination.h"

#include <cassert>


namespace models {

Combination::Combination() :
	CombinationStorage(COMBINATION_SIZE, Color::RED)
{
}

Combination::Combination(const CombinationStorage& combination) :
		CombinationStorage(combination)
{
	assert(combination.size() == COMBINATION_SIZE);
}

Combination::~Combination() {
}

}
