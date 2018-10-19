#ifndef VIEWS_SECRETCOMBINATIONVIEW_H_
#define VIEWS_SECRETCOMBINATIONVIEW_H_
#include "../models/SecretCombination.h"

namespace views {

class SecretCombinationView {
public:
	SecretCombinationView(const models::SecretCombination& secret);
	virtual ~SecretCombinationView() = default;
	void write();
private:
	const models::SecretCombination& secret;
};

}

#endif
