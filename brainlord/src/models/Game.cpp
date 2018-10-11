#include "Game.h"

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



}
