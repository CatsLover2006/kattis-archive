// Solving Kattis Triple Texting
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

std::string common, str1, str2, str3;

int main() {
    getline(std::cin, common);
    str1 = common.substr(0, common.length()/3);
    str2 = common.substr(common.length()/3, common.length()/3);
    str3 = common.substr(common.length()/3 * 2, common.length()/3);
    if (str1 == str2) {
        std::cout << str1 << std::endl;
        return 0;
    }
    if (str1 == str3) {
        std::cout << str1 << std::endl;
        return 0;
    }
    std::cout << str2 << std::endl;
    return 0;
}
