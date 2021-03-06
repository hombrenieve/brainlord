#ifndef MODELS_PROPOSEDCOMBINATION_H_
#define MODELS_PROPOSEDCOMBINATION_H_
#include "Combination.h"
#include "Result.h"
#include "SecretCombination.h"

namespace models {
class ProposedCombination : public Combination {
public:
	ProposedCombination();
	virtual ~ProposedCombination();
	void read();
	void calculateResult(const SecretCombination& secret);
	bool isWinner() const;
	void write() const;

private:
	void calculateBlacks(const Combination& secret);
	void calculateWhites(const Combination& secret);
	int findMatch(const Color& current, const Combination& secret);
	Result result;
};
}

#endif
