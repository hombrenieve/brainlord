#ifndef CONTROLLERS_CONTROLLERVISITOR_H_
#define CONTROLLERS_CONTROLLERVISITOR_H_

namespace controllers {

class StartController;
class ProposalController;
class ContinueController;

class ControllerVisitor {
public:
	virtual void visit(StartController* startController) = 0;
	virtual void visit(ProposalController* proposalController) = 0;
	virtual void visit(ContinueController* continueController) = 0;
};

}

#endif
