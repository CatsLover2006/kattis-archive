// Solving Kattis Popularity Contest
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

unsigned int friends, friendships, i, friendID;


int main() {
    std::cin >> friends >> friendships;
    int marketability[friends];
    for (i = 0; i < friends; i++) marketability[i] = -1 - i;
    for (i = 0; i < friendships * 2; i++) {
        std::cin >> friendID;
        marketability[friendID-1]++; // Friend input is 1-indexed
    }
    for (i = 0; i < friends; i++) std::cout << marketability[i] << ' ';
    std::cout << std::endl;
    return 0;
}
