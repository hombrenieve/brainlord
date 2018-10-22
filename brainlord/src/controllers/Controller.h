#ifndef CONTROLLERS_CONTROLLER_H_
#define CONTROLLERS_CONTROLLER_H_

#include "../models/Game.h"
#include "ControllerVisitor.h"

namespace controllers {
class Controller {
public:
	Controller(models::Game& game);
	virtual ~Controller();
	virtual void accept(ControllerVisitor* visitor) = 0;
	const models::Game& getGame() const;
private:
	models::Game& game;
protected:
	models::Game& getGame();
};
}

#endif
