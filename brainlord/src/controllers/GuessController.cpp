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
	assert(this->getState() == models::State::PLAYING);
	std::cout << "New try: " << this->getTry() << " out of "
			<< models::Game::MAX_PROPOSED_COMBINATION << std::endl;
	std::cout << "Please, make your guess, valid colors are ( " <<
			this->getColors() << " )" << std::endl;
	this->readGuess();
	this->calculateResult();
	this->write();
	if(this->isWinner()) {
		std::cout << "Congratulations!!, You Won!!!" << std::endl;
		this->setState(models::State::ENDING);
	} else {
		this->nextTry();
		if(this->getTry() == models::Game::MAX_PROPOSED_COMBINATION) {
			std::cout << "So sorry you lost the game :'-(" << std::endl;
			this->setState(models::State::ENDING);
		}
	}
}

}
