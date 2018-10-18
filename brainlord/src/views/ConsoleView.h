#ifndef VIEWS_CONSOLEVIEW_H_
#define VIEWS_CONSOLEVIEW_H_

#include "ContinueView.h"
#include "ProposalView.h"
#include "View.h"
#include "StartView.h"


namespace views {

class ConsoleView: public View {
public:
	ConsoleView() = default;
	virtual ~ConsoleView() = default;

	void interact(controllers::Controller* controller) override;

	void visit(controllers::StartController* startController) override;
	void visit(controllers::ProposalController* proposalController) override;
	void visit(controllers::ContinueController* continueController) override;

private:
	StartView startView;
	ProposalView proposalView;
	ContinueView continueView;
};

}

#endif
