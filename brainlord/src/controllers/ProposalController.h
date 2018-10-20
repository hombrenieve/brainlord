#ifndef CONTROLLERS_PROPOSALCONTROLLER_H_
#define CONTROLLERS_PROPOSALCONTROLLER_H_
#include "Controller.h"

namespace controllers {

class ProposalController : public Controller {
public:
	ProposalController(models::Game& game);
	virtual ~ProposalController();
	void accept(ControllerVisitor* visitor) override;

	void propose(models::ProposedCombination proposal);

	bool isWinner() const;
	bool isLoser() const;
};

}

#endif
