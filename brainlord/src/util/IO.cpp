#include "IO.h"

namespace util {

const std::string IO::NEW_LINE("\n");

void IO::writeTitle(const std::string& title) {
	IO::write(std::cout, NEW_LINE + title + NEW_LINE + NEW_LINE);
}

void IO::writeRule(char character) {
	IO::write(std::cout, std::string(RULE_WIDTH, character) + NEW_LINE);
}

void IO::writeSecret(int size) {
	IO::write(std::cout, std::string(size, '*') + NEW_LINE);
}

void IO::write(const std::string& sentence) {
	IO::write(std::cout, sentence);
}

void IO::writeln(const std::string& sentence) {
	IO::write(sentence + NEW_LINE);
}

void IO::writeError(const std::string& sentence) {
	IO::write(std::cerr, sentence);
}

void IO::writelnError(const std::string& sentence) {
	IO::writeError(sentence + NEW_LINE);
}

bool IO::yesNoDialog(const std::string& title) {
	char c;
	do {
		IO::write(title + " (Y/N):");
		c = IO::readChar();
	} while (c != 'y' and c != 'Y' and c != 'n' and c != 'N');
	return c == 'y' or c == 'Y';
}

char IO::readChar() {
	char charToRead;
	std::cin >> charToRead;
	return charToRead;
}

void IO::write(const std::string& sentence, int data) {
	IO::write(sentence + std::to_string(data));
}

void IO::writeln(const std::string& sentence, int data) {
	IO::writeln(sentence + std::to_string(data));
}

void IO::write(std::ostream& output, const std::string& sentence) {
	output << sentence;
	std::flush(output);
}

}
