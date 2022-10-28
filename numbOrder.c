// Solving Kattis Sort Two Numbers
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>
#include <math.h>
long long b = 0;
long long a = 0;

int main() {
	scanf("%lld %lld", &a, &b);
	if (a < b) printf("%lld %lld", a, b);
	else printf("%lld %lld", b, a);
	return 0;
}