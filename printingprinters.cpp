// Solving Kattis 3D Printed Statues
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

int statues, printers=1, days=1;

int main() {
	std::cin >> statues;
	while(printers < statues) {
		printers *= 2;
		days++;
	}
	std::cout << days;
	return 0;
}