/*
 * MasterMind.h
 *
 *  Created on: Oct 5, 2018
 *      Author: ediapab
 */

#ifndef MASTERMIND_H_
#define MASTERMIND_H_
#include <vector>

class MasterMind {
public:
	MasterMind();
	virtual ~MasterMind();
	void play();

private:
	void print();
	SecretCombination secretCombination;
	std::vector<ProposedCombination> proposedCombinations;

	static const int MAX_PROPOSED_COMBINATION = 10;

};

#endif /* MASTERMIND_H_ */
