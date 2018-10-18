#include "Combination.h"

#include "../util/IO.h"

namespace models {

Combination::Combination() :
	combination{Color::RED, Color::RED, Color::RED, Color::RED } {

}

Combination::~Combination() {
}

void Combination::write() const {
	util::IO::write(this->getCombination());
}

Combination::storage& Combination::getCombination() {
	return combination;
}

const Combination::storage& Combination::getCombination() const {
	return combination;
}

}
