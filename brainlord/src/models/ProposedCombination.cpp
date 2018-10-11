#include "ProposedCombination.h"

#include <iostream>
#include <cassert>

using namespace models;

ProposedCombination::ProposedCombination() :
	result(Combination::COMBINATION_SIZE)
{
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

void ProposedCombination::calculateBlacks(const Combination::storage& guess, const Combination::storage& secret) {
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		if(guess[i] == secret[i]) {
			result[i] = Success::BLACK;
		}
	}
}

int ProposedCombination::findMatch(const Color& current, const Combination::storage& secret) {
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		if(current == secret[i] and result[i] == Success::EMPTY){
			return i;
		}
	}
	return -1;
}

void ProposedCombination::calculateWhites(const Combination::storage& guess, const Combination::storage& secret) {
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		int white = this->findMatch(guess[i], secret);
		if(white != -1) {
			result[white] = Success::WHITE;
		}
	}
}

void ProposedCombination::calculateResult(const SecretCombination& secret) {
	assert(result.size() == Combination::COMBINATION_SIZE);
	this->calculateBlacks(this->getCombination(), secret.getCombination());
	this->calculateWhites(this->getCombination(), secret.getCombination());
}

bool ProposedCombination::isWinner() const {
	return this->result.isWinner();
}

void ProposedCombination::print() const {
	Combination::print();
	std::cout << " | ";
	result.print();
}
