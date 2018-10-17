#include "ContinueController.h"
#include <cassert>
#include "../util/IO.h"
#include <iostream>

namespace controllers {

ContinueController::ContinueController(models::Game& game) :
	Controller(game)
{ }

ContinueController::~ContinueController() {
}

void controllers::ContinueController::control() {
	assert(this->getState() == models::State::ENDING);
	std::cout << std::endl;
	if(util::IO::yesNoDialog("Do you want to play again?")) {
		this->clear();
		std::cout << std::endl;
		this->setState(models::State::NOT_STARTED);
	} else {
		std::cout << std::endl << "Bye bye!" << std::endl << std::endl;
		this->setState(models::State::EXIT);
	}
}

}
