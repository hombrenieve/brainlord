#include "ProposedCombination.h"
#include <iostream>
#include <cassert>

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

void ProposedCombination::calculateResult(const SecretCombination& secret) {
	assert(result.empty());
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		if(this->getCombination()[i] == secret.getCombination()[i]) {
			result.push_back(Success::BLACK);
		} else {
			result.push_back(Success::EMPTY);
		}
	}
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		if(result[i] == Success::EMPTY) {
			for(int j = 0; j < Combination::COMBINATION_SIZE; j++) {
				if(this->getCombination()[i] == secret.getCombination()[j]
					and result[j] == Success::EMPTY) {
					result[i] = Success::WHITE;
					break;
				}
			}
		}
	}
}

bool ProposedCombination::isWinner() const {
	return this->result.isWinner();
}

void ProposedCombination::print() const {
	Combination::print();
	std::cout << " | ";
	result.print();
}
