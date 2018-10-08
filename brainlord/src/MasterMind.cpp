#include "MasterMind.h"
#include <iostream>

MasterMind::MasterMind() {

}

MasterMind::~MasterMind() {
}

void MasterMind::play() {
	std::cout << "Welcome to MasterMind" << std::endl;
	do {
		this->print();
		proposedCombinations.emplace_back();
		proposedCombinations.back().read();
		proposedCombinations.back().calculateResult(secretCombination);
	} while (not proposedCombinations.back().isWinner()
			and proposedCombinations.size() < MasterMind::MAX_PROPOSED_COMBINATION);
	if(proposedCombinations.back().isWinner()) {
		std::cout << "You are the winner!!!" << std::endl;
	} else {
		std::cout << "Sorry, you have lost the game!" << std::endl;
	}
}

void MasterMind::print() const {
	std::cout << "Starting round " << proposedCombinations.size()-1 <<
			" out of " << MasterMind::MAX_PROPOSED_COMBINATION << std::endl;
	secretCombination.print();
	for (const auto& combination: proposedCombinations) {
		combination.print();
		std::cout << std::endl;
	}
}

int main() {
	MasterMind().play();
	return 0;
}
