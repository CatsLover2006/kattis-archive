// Solving Kattis Loo Rolls
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>
#include <cmath>

long long l, k = 0, n, t, p;

int main() {
    std::cin >> l >> n;
    while (n != 0) {
        k++;
        t = l;
        p = 10;
        while (p >= 0) {
            while (t > 0 && pow(10,p) * n < t) {
                t -= pow(10, p) * n;
            }
            p--;
        }
        n = -(t - n);
    }
    std::cout << k << std::endl;
    return 0;
}
