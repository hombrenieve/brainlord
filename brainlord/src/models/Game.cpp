#include "Game.h"

namespace models {

Game::Game() :
	state(State::NOT_STARTED),
	tries(MAX_PROPOSED_COMBINATION) {

}

Game::~Game() {
}

}
