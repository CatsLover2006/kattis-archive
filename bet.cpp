// Solving Kattis Betting
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>

double test;

int main() {
    scanf("%lf", &test);
    printf("%lf\n", 100/test);
    printf("%lf\n", 100/(100-test));
    return 0;
}
