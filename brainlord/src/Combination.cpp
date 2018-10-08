#include "Combination.h"
#include <iostream>

Combination::Combination() :
	combination{Color::RED, Color::RED, Color::RED, Color::RED } {

}

Combination::~Combination() {
}

void Combination::print() const {
	std::cout << "( ";
	for(const auto& color: this->getCombination()) {
		color.print();
		std::cout << " ";
	}
	std::cout << ")";
}

Combination::storage& Combination::getCombination() {
	return combination;
}

const Combination::storage& Combination::getCombination() const {
	return combination;
}
