// Solving Saving Princess Peach
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>

int len, total, x = 0;
int obstacle;

int main() {
    scanf("%d %d", &len, &total);
    int tests[len];
    for (int j = 0; j < len; j++) tests[j]=j;
    while (x++ != total) {
        scanf("%d", &obstacle);
        if (tests[obstacle] == -1) {
            total--;
            x--;
        }
        tests[obstacle] = -1;
    }
    for (int j = 0; j < len; j++) if (tests[j]!=-1) printf("%d\n",tests[j]);
    printf("Mario got %d of the dangerous obstacles.", x-1);
    return 0;
}

