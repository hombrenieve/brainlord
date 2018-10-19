#include "ProposedCombinationView.h"

#include "../util/IO.h"
#include "CombinationView.h"
#include "ResultView.h"

namespace views {

ProposedCombinationView::ProposedCombinationView(const models::ProposedCombination& proposed) :
	proposed(proposed)
{
}

void ProposedCombinationView::write() {
	CombinationView(proposed).write();
	util::IO::write(" | ");
	ResultView(proposed.getResult()).write();
}


}
