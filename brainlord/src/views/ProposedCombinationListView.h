#ifndef VIEWS_PROPOSEDCOMBINATIONLISTVIEW_H_
#define VIEWS_PROPOSEDCOMBINATIONLISTVIEW_H_
#include "../models/Game.h"

namespace views {

class ProposedCombinationListView {
public:
	ProposedCombinationListView(const models::Game::CombinationList& proposedList);
	virtual ~ProposedCombinationListView() = default;
	void write();

private:
	const models::Game::CombinationList& proposedList;
};

}

#endif
