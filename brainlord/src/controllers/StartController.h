#ifndef CONTROLLERS_STARTCONTROLLER_H_
#define CONTROLLERS_STARTCONTROLLER_H_
#include "Controller.h"

namespace controllers {

class StartController: public Controller {
public:
	StartController(models::Game& game);
	virtual ~StartController();

	void accept(ControllerVisitor* visitor) override;

	void start();

};

}

#endif
