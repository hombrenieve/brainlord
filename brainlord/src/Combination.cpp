/*
 * Combination.cpp
 *
 *  Created on: Oct 7, 2018
 *      Author: ediapab
 */

#include "Combination.h"
#include <iostream>

Combination::Combination() {
	// TODO Auto-generated constructor stub

}

Combination::~Combination() {
	// TODO Auto-generated destructor stub
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
