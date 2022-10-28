// Solving Kattis Estimating the Area of a Circle
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>
#include <math.h>
double c = 0;
double a = 0;
double b = 0;

int main() {
	while (1) {
		scanf("%lf %lf %lf", &c, &a, &b);
		if (c == 0 && a == 0 && b == 0) break;
		printf("%lf %lf\n", M_PI * c * c, ((c * 2) * (c * 2)) * (b / a));
	}
}