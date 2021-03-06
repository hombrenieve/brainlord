#include "SecretCombination.h"

#include <random>
#include <iostream>

#include "Color.h"

namespace models {

SecretCombination::SecretCombination() {
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(0, Color::NUM_COLORS-1);

	auto palette = Color::values();

	for(auto& combinationElement: this->getCombination()) {
		combinationElement = palette[dist(mt)];
	}

}

SecretCombination::~SecretCombination() {
}

void SecretCombination::write() const {
#ifdef NDEBUG
	for(unsigned int i = 0; i < this->getCombination().size(); i++) {
		std::cout << "* ";
	}
#else
	Combination::write();
#endif
}

}
