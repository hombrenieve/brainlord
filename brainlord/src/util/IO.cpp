#include "IO.h"

namespace util {
namespace IO {
void writeRule(char character) {
	std::string rule(40, character);
	std::cout << rule << std::endl;
}

bool yesNoDialog(const std::string& title) {
	char c;
	do {
		std::cout << title << " (Y/N):";
		std::flush(std::cout);
		std::cin >> c;
	} while (c != 'y' and c != 'Y' and c != 'n' and c != 'N');
	return c == 'y' or c == 'Y';
}

}
}

