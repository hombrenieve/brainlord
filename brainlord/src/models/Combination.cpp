#include "Combination.h"

namespace models {

Combination::Combination() :
	CombinationStorage(COMBINATION_SIZE, Color::RED)
{
}

Combination::Combination(const CombinationStorage& combination) :
		CombinationStorage(combination)
{ }

Combination::~Combination() {
}

}
