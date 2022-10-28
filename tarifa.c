// Solving Kattis Tarifa
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>
long long n = 0;
long long t, i = 0;
long long len = 0;

int main() {
	scanf("%lld", &n);
	scanf("%lld", &len);
	n *= len+1;
	while (i < len) {
		scanf("%lld", &t);
		n -= t;
		i++;
	}
	printf("%lld", n);
}