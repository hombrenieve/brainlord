#include "ProposedCombination.h"
#include <iostream>

ProposedCombination::ProposedCombination() {
}

ProposedCombination::~ProposedCombination() {
}

void ProposedCombination::read() {
	std::cout << "Please, make your guess:"
			<< std::endl << "Valid colors are: ";
	for(const auto& color: Color::values()) {
		std::cout << color.getName() << " ";
	}
	std::cout << std::endl;
	for(auto& combinationElement: this->getCombination()) {
		combinationElement = Color::read();
	}
}
