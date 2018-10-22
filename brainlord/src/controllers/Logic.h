#ifndef LOGIC_H_
#define LOGIC_H_

#include "../models/Game.h"
#include "StartController.h"
#include "ContinueController.h"
#include "ProposalController.h"

namespace controllers {
class Logic {
public:
	Logic();
	virtual ~Logic();
	Controller* getController();
private:
	models::Game game;
	StartController startController;
	ProposalController proposalController;
	ContinueController continueController;
};
}

#endif
