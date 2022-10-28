// Solving A Rational Sequence (Take 3)
// Solved by Chance Parsons AKA Half-Qilin
// IDK How to do this

#include <stdio.h>
#include <math.h>

long long len;
long long index, active, temp;
long long i = 0, power = 1;
long long top, bottom;

int main() {
    scanf("%lld", &len);
    while (i < len) {
        scanf("%lld", &temp);
        printf("%lld ", temp);
        scanf("%lld", &index);
        active = index-1;
        power = 1;
        top = 1;
        bottom = 1;
        while (active != 0) {
            if (active % 2 == 0) bottom = power;
            else top = power;
            active /= 2;
            power++;
        }
        printf("%lld/", top);
        printf("%lld\n", bottom);
        i++;
    }
    return 0;
}
