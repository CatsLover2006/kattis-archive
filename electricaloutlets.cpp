// Solving Kattis Electrical Outlets
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>

long long len, outlets, max, temp;

int main() {
    scanf("%lld", &len);
    while (0 < len) {
        max = 0;
        scanf("%lld", &outlets);
        while (0 < outlets) {
            scanf("%lld", &temp);
            max += temp;
            max--;
            outlets--;
        }
        max++;
        printf("%lld\n", max);
        len--;
    }
    return 0;
}
