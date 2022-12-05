// Solving Kattis Jack-O'-Lantern Juxtaposition
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

int val, temp = 1;

int main() {
	for (int i = 0; i < 3; i++) {
		std::cin >> val;
		temp *= val;
	}
	std::cout << temp;
	return 0;
}