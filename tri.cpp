// Solving Kattis Tri
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

int a, b, c;

int main() {
    std::cin >> a >> b >> c;
    if (a + b == c) {
        std::cout << a << "+" << b << "=" << c << std::endl;
        return 0;
    }
    if (a == b + c) {
        std::cout << a << "=" << b << "+" << c << std::endl;
        return 0;
    }
    if (a - b == c) {
        std::cout << a << "-" << b << "=" << c << std::endl;
        return 0;
    }
    if (a == b - c) {
        std::cout << a << "=" << b << "-" << c << std::endl;
        return 0;
    }
    if (a * b == c) {
        std::cout << a << "*" << b << "=" << c << std::endl;
        return 0;
    }
    if (a == b * c) {
        std::cout << a << "=" << b << "*" << c << std::endl;
        return 0;
    }
    if (a / b == c) {
        std::cout << a << "/" << b << "=" << c << std::endl;
        return 0;
    }
    if (a == b / c) {
        std::cout << a << "=" << b << "/" << c << std::endl;
        return 0;
    }
    return 0;
}
