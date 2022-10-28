// Solving Kattis Last Factorial Digit
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>

long long len;
long long numb;
long long n = 0;
long long i = 0;

int main() {
	scanf("%lld", &len);
	while (i < len) {
        scanf("%lld", &numb);
        n = numb - 1;
        while(n > 0) {
            numb *= n;
            n--;
        }
        printf("%lld\n", numb%10);
        i++;
	}
}