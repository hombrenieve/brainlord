#include <cassert>
#include "ProposalController.h"

namespace controllers {

ProposalController::ProposalController(models::Game& game) :
	Controller(game)
{ }

ProposalController::~ProposalController() {
}

void ProposalController::accept(ControllerVisitor* visitor) {
	visitor->visit(this);
}

void ProposalController::propose(models::ProposedCombination proposal) {
	assert(this->getGame().getState() == models::State::PLAYING);
	proposal.calculateResult(this->getGame().getSecret());
	this->getGame().addProposal(proposal);
	this->getGame().nextTry();
	if(this->isWinner() or this->isLoser()) {
		this->getGame().setState(models::State::ENDING);
	}
}

bool ProposalController::isWinner() const {
	return this->getGame().isWinner();
}

bool ProposalController::isLoser() const {
	return this->getGame().isLoser();
}

}
