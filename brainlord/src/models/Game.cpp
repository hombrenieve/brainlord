#include "Game.h"
#include "Color.h"
#include <cassert>

namespace models {

Game::Game() :
	state(State::NOT_STARTED),
	tries(1) {

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

Game::storage_combinations& Game::getProposedCombinations() {
	return proposedCombinations;
}

int Game::getTry() const {
	return tries;
}

void Game::nextTry() {
	this->tries++;
}

bool Game::isWinner() const {
	assert(not this->getProposedCombinations().empty());
	return this->getProposedCombinations().back().isWinner();
}

bool Game::isLoser() const {
	return this->getTry() == MAX_PROPOSED_COMBINATION;
}

void Game::clear() {
	this->setState(State::NOT_STARTED);
	this->setTries(1);
	this->getProposedCombinations().clear();
	this->setSecret(SecretCombination());
}

void Game::setSecret(const SecretCombination& secret) {
	this->secret = secret;
}

void Game::addProposal(const ProposedCombination& proposal) {
	this->getProposedCombinations().push_back(proposal);
}

void Game::setTries(int tries) {
	assert(tries > 0 and tries < MAX_PROPOSED_COMBINATION);
	this->tries = tries;
}

}
