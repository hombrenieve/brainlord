#include "MasterMind.h"
#include <iostream>
#include "util/IO.h"

MasterMind::MasterMind() : tries(0) {

}

MasterMind::~MasterMind() {
}

void MasterMind::play() {
	std::cout << "Welcome to MasterMind" << std::endl;
	do {
		this->tries++;
		this->print();
		proposedCombinations.emplace_back();
		proposedCombinations.back().read();
		proposedCombinations.back().calculateResult(secretCombination);
	} while (not proposedCombinations.back().isWinner()
			and this->tries < MasterMind::MAX_PROPOSED_COMBINATION);
	if(proposedCombinations.back().isWinner()) {
		std::cout << "You are the winner!!!" << std::endl;
	} else {
		std::cout << "Sorry, you have lost the game!" << std::endl;
	}
}

void MasterMind::print() const {
	std::cout << "Starting round " << this->tries <<
			" out of " << MasterMind::MAX_PROPOSED_COMBINATION << std::endl;
	std::cout << "Secret: ";
	secretCombination.print();
	std::cout << std::endl;
	util::IO::show(proposedCombinations, "\n");
}

int main() {
	MasterMind().play();
	return 0;
}
