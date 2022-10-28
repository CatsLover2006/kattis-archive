// Solving Kattis Building Pyramids
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>

long long test, pyramid, i = -1;

int main() {
    scanf("%lld", &test);
    while (pyramid < test) {
        i += 2;
        pyramid += i * i;
    }
    if (pyramid == test) i++;
    printf("%lld\n", i/2);
    return 0;
}
