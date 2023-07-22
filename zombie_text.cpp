// Solving Kattis Undead or Alive
// Solved by Chance Parsons AKA Hanabi

#include <iostream>

std::string str;
int type = 0;

int main() {
	std::getline(std::cin, str);
	if (str.find(":)") != std::string::npos) type += 1;
	if (str.find(":(") != std::string::npos) type += 2;
	switch (type) {
		case 1: {
			std::cout << "alive";
			break;
		}
		case 2: {
			std::cout << "undead";
			break;
		}
		case 3: {
			std::cout << "double agent";
			break;
		}
		default: std::cout << "machine";
	}
	std::cout << std::endl;
	return 0;
}