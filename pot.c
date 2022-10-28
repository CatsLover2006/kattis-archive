// Solving Kattis Pot
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>
#include <math.h>

long long len = 0;
long long i, j;
long long n = 0;

long long myPow(long long x, long long n)
{
    long long i; /* Variable used in loop counter */
    long long number = 1;

    for (i = 0; i < n; i++) number *= x;

    return(number);
}

int main() {
	scanf("%lld", &len);
	while (i < len) {
	  scanf("%lld", &j);
		n += myPow(j/10, j%10);
		i++;
	}
	printf("%lld", n);
}