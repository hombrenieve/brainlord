#ifndef MODELS_GAME_H_
#define MODELS_GAME_H_
#include <array>
#include <string>

#include "SecretCombination.h"
#include "ProposedCombination.h"
#include "State.h"

namespace models {

class Game {
public:
	static const int MAX_PROPOSED_COMBINATION = 10;
	using storage_combinations = std::vector<ProposedCombination>;

	Game();
	State getState() const;
	void setState(State state);
	const SecretCombination& getSecret() const;
	const storage_combinations& getProposedCombinations() const;
	void write() const;
	int getTry() const;
	void nextTry();
	bool isWinner() const;
	std::string getColors() const;
	void readGuess();
	void calculateResult();
	void clear();

private:
	SecretCombination secret;
	storage_combinations proposedCombinations;
	storage_combinations& getProposedCombinations();
	void setSecret(const SecretCombination& secret);
	void setTries(int tries);

	State state;
	int tries;


};

}

#endif
