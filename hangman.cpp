// Solving Kattis Hangman
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

std::string word, check;
int err = 0, worked = 0;
bool works;

int main() {
    getline(std::cin, word);
    getline(std::cin, check);
    for (char letter : check) {
        works = false;
        for (char letterInWord : word) {
            if (letter == letterInWord) {
                worked++;
                works = true;
            }
        }
        err += !works;
        if (worked == word.length()) {
            std::cout << "WIN" << std::endl;
            return 0;
        }
        if (err == 10) {
            std::cout << "LOSE" << std::endl;
            return 0;
        }
    }
    return 0;
}
