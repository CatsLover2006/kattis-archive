// Solving Kattis Greetings!
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

std::string hi;

int main() {
    std::cin >> hi;
    std::cout << "h";
    for (int i = 2; i < hi.length(); i++) std::cout << "ee";
    std::cout << "y" << std::endl;
    return 0;
}
