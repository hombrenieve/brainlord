#ifndef VIEWS_GAMEVIEW_H_
#define VIEWS_GAMEVIEW_H_
#include "../controllers/Controller.h"

namespace views {

class GameView {
public:
	GameView(controllers::Controller* controller);
	virtual ~GameView() = default;
	void write();
private:
	controllers::Controller* controller;
};

}

#endif
