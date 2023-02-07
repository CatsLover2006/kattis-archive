// Solving Kattis Canadians, eh?
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

std::string check;

int main() {
    getline(std::cin, check);
    if (check.substr(check.length()-3, 3) == "eh?")
        std::cout << "Canadian!" << std::endl;
    else
        std::cout << "Imposter!" << std::endl;
    return 0;
}
