// Solving Kattis Zyxab
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>
#include <iostream>

int len;
std::string cword, bword = "neibb!";
bool test;

int main() {
    scanf("%d", &len);
    main:
    while (len >= 0) {
        len--;
        std::cin >> cword;
        if (cword.length()<5) goto main;
        for (int i = 0; i < cword.length()-1; i++) {
            for (int j = i + 1; j < cword.length(); j++) {
                if (cword[i] == cword[j]) {
                    goto main;
                }
            }
        }
        if (bword == "neibb!") bword = cword;
        if (bword.length() > cword.length()) bword = cword;
        if (bword.length() == cword.length() && bword < cword) bword = cword;
    }
    std::cout << bword;
    return 0;
}

