#include "Game.h"
#include "../util/IO.h"
#include <iostream>

namespace models {

Game::Game() :
	state(State::NOT_STARTED),
	tries(MAX_PROPOSED_COMBINATION) {

}

State Game::getState() const {
	return state;
}

void Game::setState(State state) {
	this->state = state;
}

const SecretCombination& Game::getSecret() const {
	return secret;
}

const Game::storage_combinations& Game::getProposedCombinations() const {
	return proposedCombinations;
}

void Game::write() const {
	util::IO::showRule('#');
	this->getSecret().write();
	std::cout << std::endl;
	util::IO::showRule('-');
	util::IO::show(this->getProposedCombinations(), "\n");
}

}


