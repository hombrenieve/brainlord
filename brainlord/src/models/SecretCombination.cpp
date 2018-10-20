#include "SecretCombination.h"

#include <random>

#include "Color.h"

namespace models {

SecretCombination::SecretCombination() {
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, Color::NUM_COLORS-1);

	auto palette = Color::values();

	for(auto& combinationElement: (*this)) {
		combinationElement = palette[dist(mt)];
	}

}

SecretCombination::~SecretCombination() {
}

}
