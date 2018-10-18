#ifndef VIEWS_VIEW_H_
#define VIEWS_VIEW_H_

#include "../controllers/Controller.h"
#include "../controllers/ControllerVisitor.h"

namespace views {

class View : public controllers::ControllerVisitor {
public:
	virtual void interact(controllers::Controller* controller) = 0;
};

}

#endif
