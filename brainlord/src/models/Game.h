#ifndef MODELS_GAME_H_
#define MODELS_GAME_H_
#include <vector>

#include "SecretCombination.h"
#include "ProposedCombination.h"
#include "State.h"

namespace models {

class Game {
public:
	static const int MAX_PROPOSED_COMBINATION = 10;
	using CombinationList = std::vector<ProposedCombination>;

	Game();
	State getState() const;
	void setState(State state);
	const SecretCombination& getSecret() const;
	const CombinationList& getProposedCombinations() const;
	int getTry() const;
	void nextTry();
	bool isWinner() const;
	bool isLoser() const;
	void addProposal(const ProposedCombination& proposal);
	void clear();

private:
	SecretCombination secret;
	CombinationList proposedCombinations;
	CombinationList& getProposedCombinations();
	void setSecret(const SecretCombination& secret);
	void setTries(int tries);

	State state;
	int tries;


};

}

#endif
