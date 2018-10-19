#include "ProposedCombinationListView.h"

#include "../util/IO.h"
#include "ProposedCombinationView.h"
namespace views {

ProposedCombinationListView::ProposedCombinationListView(const models::Game::storage_combinations& proposedList) :
	proposedList(proposedList)
{
}

void ProposedCombinationListView::write() {
	for(const auto& proposal: proposedList) {
		ProposedCombinationView(proposal).write();
		util::IO::writeln("");
	}
}

}
