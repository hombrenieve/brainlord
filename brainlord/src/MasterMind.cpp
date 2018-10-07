/*
 * MasterMind.cpp
 *
 *  Created on: Oct 5, 2018
 *      Author: ediapab
 */

#include "MasterMind.h"

MasterMind::MasterMind() {

}

MasterMind::~MasterMind() {
}

void MasterMind::play() {
	do {
		this->print();
		proposedCombinations.emplace_back();
		proposedCombinations.back().read();
		proposedCombinations.calculateResult(secretCombination);
	} while (!proposedCombinations.back().isWinner()
			and proposedCombinations.size() < MAX_PROPOSED_COMBINATIONS)
}

void MasterMind::print() {
	secretCombination.print();
	for (const auto& combination: proposedCombinations) {
		combination.print();
	}
}
