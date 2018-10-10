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
	void calculateBlacks(const Combination::storage& guess, const Combination::storage& secret);
	void calculateWhites(const Combination::storage& guess, const Combination::storage& secret);
	int findMatch(const Color& current, const Combination::storage& secret);
	Result result;
};

#endif
