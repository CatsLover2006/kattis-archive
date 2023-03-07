// Solving Kattis Pokechat
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

std::string cypher;
int at;

int main() {
    std::getline(std::cin, cypher);
    while (scanf("%3d", &at) == 1) {
        std::cout << cypher[at-1];
    }
    std::cout << std::endl;
    return 0;
}
