#include "GuessController.h"
#include <cassert>
#include <iostream>

namespace controllers {

GuessController::GuessController(models::Game& game) :
	Controller(game)
{ }

GuessController::~GuessController() {
}

void GuessController::control() {
	assert(this->getGame().getState() == models::State::PLAYING);
	std::cout << "New try: " << this->getGame().getTry() << " out of "
			<< models::Game::MAX_PROPOSED_COMBINATION << std::endl;
	std::cout << "Please, make your guess, valid colors are ( " <<
			this->getGame().getColors() << " )" << std::endl;
	this->getGame().readGuess();
	this->getGame().calculateResult();
	this->getGame().write();
	if(this->getGame().isWinner()) {
		std::cout << "Congratulations!!, You Won!!!" << std::endl;
		this->getGame().setState(models::State::ENDING);
	} else {
		this->getGame().nextTry();
		if(this->getGame().getTry() == models::Game::MAX_PROPOSED_COMBINATION) {
			std::cout << "So sorry you lost the game :'-(" << std::endl;
			this->getGame().setState(models::State::ENDING);
		}
	}
}

}
