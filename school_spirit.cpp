// Solving Kattis School Spirit
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

unsigned int len;
long double group = 0, funny = 0;

long double power(long double initial, unsigned int input) {
    if (input == 0) return 1;
    return initial * power(initial, input - 1);
}

int main() {
    std::cin >> len;
    long double spirit[len];
    for(unsigned int i = 0; i < len; i++) std::cin >> spirit[i];
    for(unsigned int i = 0; i < len; i++) {
        group += spirit[i] * power(0.8, i);
    }
    for (unsigned int skip = 0; skip < len; skip++) {
        for (unsigned int i = 0; i < len; i++) {
            if (i == skip) continue;
            funny += spirit[i] * power(0.8, i - (i>skip));
        }
    }
    printf("%LF\n%LF\n", group / 5, funny / 5 / len);
    return 0;
}
