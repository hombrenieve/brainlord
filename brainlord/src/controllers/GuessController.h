#ifndef CONTROLLERS_GUESSCONTROLLER_H_
#define CONTROLLERS_GUESSCONTROLLER_H_
#include "Controller.h"

namespace controllers {

class GuessController : public Controller {
public:
	GuessController(models::Game& game);
	virtual ~GuessController();
	void control() override;
};

}

#endif
