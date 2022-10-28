// Solving Kattis Quality-Adjusted Life-Year
// Solved by Chance Parsons AKA 

#import <stdio.h>

long long len = 0;
double i, j;
double numb = 0;

int main() {
	scanf("%lld", &len);
	while (i < len) {
		if (scanf("%lf %lf", &i, &j) == 2) {
			numb += j * i;
		}
		i++;
	}
	printf("%8.5f", numb);
}