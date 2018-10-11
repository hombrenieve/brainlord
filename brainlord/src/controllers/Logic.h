#ifndef LOGIC_H_
#define LOGIC_H_

#include "../models/Game.h"
#include "GuessController.h"
#include "StartController.h"
#include "ContinueController.h"

namespace controllers {
class Logic {
public:
	Logic();
	virtual ~Logic();
	Controller* getController();
private:
	models::Game game;
	StartController startController;
	GuessController guessController;
	ContinueController continueController;
};
}

#endif
