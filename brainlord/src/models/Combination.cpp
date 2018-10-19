#include "Combination.h"

namespace models {

Combination::Combination() :
	combination{Color::RED, Color::RED, Color::RED, Color::RED } {

}

Combination::~Combination() {
}

Combination::storage& Combination::getCombination() {
	return combination;
}

const Combination::storage& Combination::getCombination() const {
	return combination;
}

}
