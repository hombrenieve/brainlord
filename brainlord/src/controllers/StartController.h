#ifndef CONTROLLERS_STARTCONTROLLER_H_
#define CONTROLLERS_STARTCONTROLLER_H_
#include "Controller.h"

namespace controllers {

class StartController: public Controller {
public:
	StartController();
	virtual ~StartController();
	void control() override;
};

}

#endif
