// Solving Kattis Planina
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>
#include <math.h>
long long a = 0;
long long b = 2;
long long c = 0;

int main() {
	scanf("%lld", &a);
	while (c < a) {
		b += b-1;
		c++;
	}
	printf("%lld", b * b);
	return 0;
}