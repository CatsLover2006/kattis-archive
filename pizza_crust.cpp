// Solving Kattis Pizza Crust
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>
#include <cmath>

long double size, crust, area, cheese, pi = atan(1)*4;

int main() {
    std::cin >> size >> crust;
    area = pi * size * size;
    cheese = pi * (size-crust) * (size-crust);
    printf("%0.16LF\n", (cheese/area)*100);
    return 0;
}
