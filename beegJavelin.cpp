// Solving Kattis Jumbo Javelin
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

int len, total = 1, var;

int main() {
	std::cin >> len;
	total -= len;
	while(len) {
		std::cin >> var;
		total += var;
		len--;
	}
	std::cout << total;
	return 0;
}