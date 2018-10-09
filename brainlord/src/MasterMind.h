#ifndef MASTERMIND_H_
#define MASTERMIND_H_
#include "ProposedCombination.h"
#include "SecretCombination.h"
#include <vector>

class MasterMind {
public:
	MasterMind();
	virtual ~MasterMind();
	void play();

private:
	void print() const;
	SecretCombination secretCombination;
	std::vector<ProposedCombination> proposedCombinations;

	static const int MAX_PROPOSED_COMBINATION = 10;
	int tries;

};

#endif /* MASTERMIND_H_ */
