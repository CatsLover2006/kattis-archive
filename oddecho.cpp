// Solving Kattis Odd Echo
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>
#include <iostream>

int i;
int j = 0;

int main() {
    scanf("%i", &i);
    std::string word;
    while (j < i) {
        std::cin >> word;
        if (j%2 == 0) std::cout << word << "\n";
        j++;
    }
    return 0;
}
