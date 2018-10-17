#ifndef MODELS_SECRETCOMBINATION_H_
#define MODELS_SECRETCOMBINATION_H_
#include "Combination.h"

namespace models {
class SecretCombination : public Combination {
public:
	SecretCombination();
	virtual ~SecretCombination();
	void write() const;
};
}
#endif
