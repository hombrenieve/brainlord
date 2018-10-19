#ifndef CONTROLLERS_PROPOSALCONTROLLER_H_
#define CONTROLLERS_PROPOSALCONTROLLER_H_
#include "Controller.h"

namespace controllers {

class ProposalController : public Controller {
public:
	ProposalController(models::Game& game);
	virtual ~ProposalController();
	void accept(ControllerVisitor* visitor) override;
};

}

#endif
