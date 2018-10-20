#ifndef VIEWS_GAMEVIEW_H_
#define VIEWS_GAMEVIEW_H_
#include "../controllers/Controller.h"

namespace views {

class GameView {
public:
	GameView(const controllers::Controller* controller);
	virtual ~GameView() = default;
	void write();
	void writeTry();
private:
	const controllers::Controller* controller;
};

}

#endif
