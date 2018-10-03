#ifndef FEEDBACK_H_
#define FEEDBACK_H_
#include "Pattern.h"
#include "array"

class FeedBack {
	enum class Marker {
		WHITE,
		BLACK,
		EMPTY
	};
	using markerRow=std::array<Marker, Pattern::LENGTH>;

public:
	FeedBack(const Pattern& guess, const Pattern& secretKey);
	virtual ~FeedBack();
	bool isVictory();

	int getRightlyColoredCounter() const;

	int getRightlyPositionedCounter() const;

private:
	markerRow feedBackRow;

};

#endif
