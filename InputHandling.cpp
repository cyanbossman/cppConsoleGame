#include<iostream>


namespace input {

	void ClearBadInput() {
		std::cin.clear();
		std::cin.ignore(100000, '\n');
		std::cout << "\n\nPlease use valid input!\n\n";
	}
}