// Solving Kattis Finding An A
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>

long long i;

int main() {
    while ((i = getchar()) != 'a') {
        // Nothing
    }
    putchar(i);
    while ((i = getchar()) != EOF) {
        putchar(i);
    }
    printf("\n");
    return 0;
}
