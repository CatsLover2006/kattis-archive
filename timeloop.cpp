// Solving Kattis Stuck In A Time Loop
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>

long long len;
long long i = 1;

int main() {
    scanf("%lld", &len);
    while (i < len) {
        printf("%lld Abracadabra\n", i);
        i++;
    }
    printf("%lld Abracadabra\n", len);
    return 0;
}
