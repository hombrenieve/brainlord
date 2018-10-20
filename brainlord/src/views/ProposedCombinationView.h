#ifndef VIEWS_PROPOSEDCOMBINATIONVIEW_H_
#define VIEWS_PROPOSEDCOMBINATIONVIEW_H_
#include "../models/ProposedCombination.h"

namespace views {

class ProposedCombinationView {
public:
	ProposedCombinationView(const models::ProposedCombination& proposed);
	ProposedCombinationView();
	virtual ~ProposedCombinationView() = default;
	void write();
private:
	const models::ProposedCombination& proposed;
};

}

#endif
