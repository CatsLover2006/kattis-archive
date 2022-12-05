// Solving Kattis Quadrant Selection
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

int val, temp = 1;

int main() {
	std::cin >> val;
	if (val < 0) temp++;
	std::cin >> val;
	if (val < 0) temp = 5 - temp;
	std::cout << temp;
	return 0;
}