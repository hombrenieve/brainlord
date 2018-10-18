#ifndef CONTROLLERS_CONTROLLER_H_
#define CONTROLLERS_CONTROLLER_H_
#include <string>

#include "../models/Game.h"
#include "../models/State.h"
#include "ControllerVisitor.h"

namespace controllers {
class Controller {
public:
	Controller(models::Game& game);
	virtual ~Controller();
	virtual void control() = 0;
	virtual void accept(ControllerVisitor* visitor) = 0;
private:
	models::Game& game;
protected:
	models::Game& getGame();
};
}

#endif
