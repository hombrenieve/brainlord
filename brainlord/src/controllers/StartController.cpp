#include "StartController.h"
#include <cassert>
#include <iostream>

namespace controllers {

StartController::StartController(models::Game& game) :
	Controller(game)
{ }

StartController::~StartController() {
}



void StartController::control() {
	assert(this->getState() == models::State::NOT_STARTED);
	std::cout << "Wellcome to MasterMind" << std::endl << std::endl;
	this->write();
	this->setState(models::State::PLAYING);
}

}
