#include "Logic.h"

namespace controllers {

Logic::Logic() :
	startController(game),
	guessController(game),
	continueController(game)
{
}

Logic::~Logic() {
}

Controller* Logic::getController() {
	switch(game.getState()) {
	case models::State::NOT_STARTED:
		return &startController;
	case models::State::PLAYING:
		return &guessController;
	case models::State::ENDING:
		return &continueController;
	case models::State::EXIT:
	default:
		return nullptr;
	}
}
}
