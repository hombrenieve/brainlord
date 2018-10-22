#ifndef MODELS_PROPOSEDCOMBINATION_H_
#define MODELS_PROPOSEDCOMBINATION_H_
#include "Combination.h"
#include "Result.h"
#include "SecretCombination.h"

namespace models {
class ProposedCombination : public Combination {
public:
	ProposedCombination(const Combination& combination);
	virtual ~ProposedCombination();
	void calculateResult(const SecretCombination& secret);
	const Result& getResult() const;
	bool isWinner() const;

private:
	void calculateBlacks(const Combination& secret);
	void calculateWhites(const Combination& secret);
	int findIndex(const Color& current, const Combination& secret);
	Result result;
};
}

#endif
