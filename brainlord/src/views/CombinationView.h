#ifndef VIEWS_COMBINATIONVIEW_H_
#define VIEWS_COMBINATIONVIEW_H_
#include "../models/Combination.h"

namespace views {

class CombinationView {
public:
	CombinationView(const models::Combination& combination);
	CombinationView() = default;
	virtual ~CombinationView() = default;
	void write();
	models::Combination read();

private:
	models::Combination combination;
};

}

#endif
