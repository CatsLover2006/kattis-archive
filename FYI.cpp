// Solving Kattis FYI
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>

long long i;

int main() {
    scanf("%lld", &i);
    i /= 10000;
    printf(i==555?"1":"0");
    return 0;
}
