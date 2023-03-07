// Solving Kattis Odd Man Out
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

unsigned long long cases, people[1000], guests;

int main() {
    std::cin >> cases;
    for (int l = 0; l < cases; l++) {
        std::cin >> guests;
        for (int i = 0; i < guests; i++) {
            std::cin >> people[i];
        }
        for (int i = 0; i < guests; i++) {
            cont:
            for (int j = 0; j < guests; j++) {
                if (i == j) continue;
                if (people[i] == people[j]) {
                    i++;
                    goto cont;
                }
            }
            if (i >= guests) continue;
            std::cout << "Case #" << (l + 1) << ": " << people[i] << std::endl;
        }
    }
    return 0;
}
