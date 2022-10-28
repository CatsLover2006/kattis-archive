// Solving Kattis Autori
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>
#include <iostream>

std::string str;
size_t i = 0;

int main() {
    std::cin >> str;
    while (str.find("-", i) < str.size()) {
        std::cout << str.substr(i, 1);
        i = str.find("-", i) + 1;
    }
    std::cout << str.substr(i, 1);
    return 0;
}
