// Solving Kattis Cold-puter Science
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

long len, t, count = 0;

int main() {
    std::cin >> len;
    for (int i = 0; i < len; i++) {
        std::cin >> t;
        if (t < 0) count++;
    }
    std::cout << count << std::endl;
    return 0;
}
