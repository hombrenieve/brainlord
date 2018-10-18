#ifndef UTIL_IO_H_
#define UTIL_IO_H_
#include <iostream>


namespace util {
	namespace IO {
		template<typename iterableClass>
			void write(const iterableClass& iterable, const std::string& separator = " ") {
				for(const auto& item: iterable) {
						item.write();
						std::cout << separator;
					}
			}
		void writeRule(char character);

		bool yesNoDialog(const std::string& title);
	}
}

#endif
