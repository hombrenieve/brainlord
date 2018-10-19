#ifndef VIEWS_COMBINATIONVIEW_H_
#define VIEWS_COMBINATIONVIEW_H_
#include "../models/Combination.h"

namespace views {

class CombinationView {
public:
	CombinationView(const models::Combination& combination);
	virtual ~CombinationView() = default;
	void write();

private:
	const models::Combination& combination;
};

}

#endif
