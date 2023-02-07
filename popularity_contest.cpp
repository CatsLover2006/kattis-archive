// Solving Kattis Popularity Contest
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

unsigned int friends, friendships, i, friend1, friend2;

int main() {
    std::cin >> friends >> friendships;
    int marketability[friends];
    for (i = 0; i < friends; i++) marketability[i] = 0;
    for (i = 0; i < friendships; i++) {
        std::cin >> friend1 >> friend2;
        friend1--;
        friend2--;
        marketability[friend1]++;
        marketability[friend2]++;
    }
    for (i = 0; i < friends; i++) {
        marketability[i] -= i + 1;
        std::cout << marketability[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
