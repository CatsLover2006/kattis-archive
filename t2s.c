// Solving Kattis Take Two Stones
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>
long long n = 0;

int main() {
	scanf("%lld", &n);
	if (n % 2 == 0) printf("Bob");
	else printf("Alice");
}