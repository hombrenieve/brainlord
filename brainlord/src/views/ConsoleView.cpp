#include "ConsoleView.h"

namespace views {
void ConsoleView::interact(controllers::Controller* controller) {
	controller->accept(this);
}

void ConsoleView::visit(controllers::StartController* startController) {
	startView.interact(startController);
}

void ConsoleView::visit(controllers::ProposalController* proposalController) {
	proposalView.interact(proposalController);
}

void ConsoleView::visit(controllers::ContinueController* continueController) {
	continueView.interact(continueController);
}

}
