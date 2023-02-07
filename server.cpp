// Solving Kattis Server
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

unsigned int maxTime, tasks, complete = 0, timeUsed = 0;

int main() {
    std::cin >> tasks >> maxTime;
    int time[tasks];
    for (int i = 0; i < tasks; i++) std::cin >> time[i];
    while (true) {
        timeUsed += time[complete];
        if (timeUsed < maxTime) complete++;
        else if (timeUsed == maxTime) {
            complete++;
            break;
        } else break;
    }
    std::cout << complete << std::endl;
    return 0;
}
