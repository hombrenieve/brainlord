#ifndef CONTROLLERS_CONTINUECONTROLLER_H_
#define CONTROLLERS_CONTINUECONTROLLER_H_

#include "Controller.h"

namespace controllers {

class ContinueController: public Controller {
public:
	ContinueController(models::Game& game);
	virtual ~ContinueController();
	void control() override;
	void accept(ControllerVisitor* visitor) override;
};

}

#endif
