#include "IO.h"

namespace util {
namespace IO {
void writeRule(char character) {
	std::string rule(40, character);
	std::cout << rule << std::endl;
}

void writeSecret(int size) {
	std::cout << std::string(size, '*') << std::endl;
}

void writeTitle(const std::string& title) {
	std::cout << std::endl << title << std::endl << std::endl;
}

void write(const std::string& sentence) {
	std::cout << sentence;
}
void writeln(const std::string& sentence) {
	std::cout << sentence << std::endl;
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

