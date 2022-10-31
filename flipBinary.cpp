// Solving Kattis Reversed Binary Numbers
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

unsigned long long numb, flipped;
unsigned short i, max;

int main() {
	std::cin >> numb;
	flipped = numb;
	while(flipped != 0){
		flipped=flipped>>1;
		i++;
	}
	max = i;
	while(i != 0) {
		if (numb&(1UL << (i-1))) flipped |= (1UL << (max-i));
		i--;
	}
	std::cout << flipped;
}