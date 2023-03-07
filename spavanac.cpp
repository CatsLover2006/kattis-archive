// Solving Kattis Spavanac
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

int hours, minutes;

int main() {
    std::cin >> hours >> minutes;
    minutes -= 45;
    if (minutes < 0) {
        minutes += 60;
        hours--;
        if (hours < 0) hours += 24;
    }
    std::cout << hours << " " << minutes << std::endl;
    return 0;
}
