#ifndef CONTROLLERS_CONTROLLER_H_
#define CONTROLLERS_CONTROLLER_H_
#include "../models/Game.h"
#include "../models/State.h"

namespace controllers {
class Controller {
public:
	Controller(models::Game& game);
	virtual ~Controller();
	virtual void control() = 0;
private:
	models::Game& game;
protected:
	models::Game& getGame();

	models::State getState();
	void setState(models::State state);

	void write();
};
}

#endif
