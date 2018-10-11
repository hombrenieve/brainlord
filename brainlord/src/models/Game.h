#ifndef MODELS_GAME_H_
#define MODELS_GAME_H_
#include <array>

#include "SecretCombination.h"
#include "ProposedCombination.h"
#include "State.h"

namespace models {

class Game {
public:
	static const int MAX_PROPOSED_COMBINATION = 10;
	Game();
	State getState() const;
	void setState(State state);

private:
	SecretCombination secret;
	std::array<ProposedCombination,MAX_PROPOSED_COMBINATION> proposedCombinations;
	State state;
	int tries;


};

}

#endif
