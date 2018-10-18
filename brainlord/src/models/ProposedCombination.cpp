#include "ProposedCombination.h"

#include <iostream>
#include <cassert>

namespace models {

ProposedCombination::ProposedCombination() :
	result(Combination::COMBINATION_SIZE)
{
}

ProposedCombination::~ProposedCombination() {
}

void ProposedCombination::read() {
	for(auto& combinationElement: this->getCombination()) {
		combinationElement = Color::read();
	}
}

void ProposedCombination::calculateBlacks(const Combination& secret) {
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		if(this->getCombination()[i] == secret.getCombination()[i]) {
			result[i] = Success::BLACK;
		}
	}
}

int ProposedCombination::findMatch(const Color& current, const Combination& secret) {
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		if(current == secret.getCombination()[i] and result[i] == Success::EMPTY){
			return i;
		}
	}
	return -1;
}

void ProposedCombination::calculateWhites(const Combination& secret) {
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		int white = this->findMatch(this->getCombination()[i], secret);
		if(white != -1) {
			result[white] = Success::WHITE;
		}
	}
}

void ProposedCombination::calculateResult(const SecretCombination& secret) {
	assert(result.size() == Combination::COMBINATION_SIZE);
	this->calculateBlacks(secret);
	this->calculateWhites(secret);
}

bool ProposedCombination::isWinner() const {
	return this->result.isWinner();
}

void ProposedCombination::write() const {
	Combination::write();
	std::cout << " | ";
	result.write();
}

}
