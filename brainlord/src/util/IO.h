#ifndef UTIL_IO_H_
#define UTIL_IO_H_
#include <iostream>


namespace util {
	namespace IO {
		template<typename iterableClass>
			void show(const iterableClass& iterable, const std::string& separator = " ") {
				for(const auto& item: iterable) {
						item.write();
						std::cout << separator;
					}
			}
		void showRule(char character);
	}
}

#endif
