#include "IO.h"

namespace util {
namespace IO {
void showRule(char character) {
	std::string rule(40, character);
	std::cout << rule << std::endl;
}
}
}

