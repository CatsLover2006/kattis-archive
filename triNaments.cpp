// Solving Kattis Triangle Ornaments
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>
#include <cmath>

long long numb;
long double a, b, c, m, w, A, W, tW;

int main() {
    scanf("%lld", &numb);
	while(numb > 0) {
		scanf("%Lf %Lf %Lf", &a, &b, &c);
		A = acos((c*c + b*b - a*a)/(2*c*b));
		c/=2;
		m = sqrt(c*c+b*b-2*c*b*cos(A));
		W = asin((sin(A)/m)*c);
		w = sin(W) * b;
		tW += 2*w;
		numb--;
	}
	printf("%Lf", tW);
    return 0;
}
