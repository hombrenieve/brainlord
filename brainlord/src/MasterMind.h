#ifndef MASTERMIND_H_
#define MASTERMIND_H_
#include <vector>
#include "models/ProposedCombination.h"
#include "models/SecretCombination.h"

class MasterMind {
public:
	MasterMind();
	virtual ~MasterMind();
	void play();

private:
	models::SecretCombination secretCombination;
	std::vector<models::ProposedCombination> proposedCombinations;

	static const int MAX_PROPOSED_COMBINATION = 10;
	int tries;

	void print() const;
};

#endif
