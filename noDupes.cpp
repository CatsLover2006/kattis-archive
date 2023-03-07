// Solving Kattis No Duplicates
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

std::string sentence;
int start = 0, second = 0;

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int main() {
    getline(std::cin, sentence);
    while (sentence.find(' ', start) < sentence.length()) {
        second = start;
        while (sentence.find(' ', second) < sentence.length()) {
            second = sentence.find(' ', second) + 1;
            if (sentence.substr(start, sentence.find(' ', start + 1) - start) == sentence.substr(second, sentence.find(' ', second + 1) - second)) {
                std::cout << "no" << std::endl;
                return 0;
            }
        }
        start = sentence.find(' ', start) + 1;
    }
    std::cout << "yes" << std::endl;
    return 0;
}
