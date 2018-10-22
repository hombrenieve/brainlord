#include "ProposedCombination.h"

#include <cassert>

namespace models {

ProposedCombination::ProposedCombination(const Combination& combination) :
	Combination(combination),
	result(Combination::COMBINATION_SIZE)
{
}

ProposedCombination::~ProposedCombination() {
}

void ProposedCombination::calculateBlacks(const Combination& secret) {
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		if(this->at(i) == secret[i]) {
			result[i] = Success::BLACK;
		}
	}
}

int ProposedCombination::findIndex(const Color& current, const Combination& secret) {
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		if(current == secret[i] and result[i] == Success::EMPTY){
			return i;
		}
	}
	return -1;
}

void ProposedCombination::calculateWhites(const Combination& secret) {
	for(int i = 0; i < Combination::COMBINATION_SIZE; i++) {
		int white = this->findIndex(this->at(i), secret);
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

const Result& ProposedCombination::getResult() const {
	return result;
}

}
