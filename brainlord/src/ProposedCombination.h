#ifndef PROPOSEDCOMBINATION_H_
#define PROPOSEDCOMBINATION_H_
#include "Combination.h"
#include "SecretCombination.h"
#include "Result.h"

class ProposedCombination : public Combination {
public:
	ProposedCombination();
	virtual ~ProposedCombination();
	void read();
	void calculateResult(const SecretCombination& secret);
	bool isWinner() const;
	void print() const;

private:
	Result result;
};

#endif
