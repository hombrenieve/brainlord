#include "Game.h"
#include "Color.h"
#include "../util/IO.h"
#include <iostream>
#include <sstream>
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

void Game::write() const {
	util::IO::writeRule('#');
	this->getSecret().write();
	std::cout << std::endl;
	util::IO::writeRule('-');
	util::IO::write(this->getProposedCombinations(), "\n");
	util::IO::writeRule('#');
}

bool Game::isWinner() const {
	assert(not this->getProposedCombinations().empty());
	return this->getProposedCombinations().back().isWinner();
}

std::string Game::getColors() const {
	std::ostringstream colors;
	for(const auto& color: Color::values()) {
		colors << color.getName() << " ";
	}
	return colors.str().substr(0,colors.str().size()-1);
}

void Game::readGuess() {
	ProposedCombination proposal;
	proposal.read();
	this->getProposedCombinations().push_back(proposal);
}

void Game::calculateResult() {
	this->getProposedCombinations().back().calculateResult(this->getSecret());
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

void Game::setTries(int tries) {
	assert(tries > 0 and tries < MAX_PROPOSED_COMBINATION);
	this->tries = tries;
}

}
