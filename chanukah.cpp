// Solving Kattis Chanukah Challenge
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>

long double test;

int main() {
    scanf("%lld", &len);
    while (0 < len) {
        scanf("%lld", &test);
        printf("%lld ", test);
        scanf("%lld", &test);
        max = test;
        while (0 < test) {
            max += test;
            test--;
        }
        printf("%lld\n", max);
        len--;
    }
    return 0;
}
