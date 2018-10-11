#include "Combination.h"

#include "../util/IO.h"

using namespace models;

Combination::Combination() :
	combination{Color::values()[0], Color::values()[0], Color::values()[0], Color::values()[0] } {

}

Combination::~Combination() {
}

void Combination::write() const {
	util::IO::show(this->getCombination());
}

Combination::storage& Combination::getCombination() {
	return combination;
}

const Combination::storage& Combination::getCombination() const {
	return combination;
}
