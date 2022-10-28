// Solving Kattis Grassseed
// Solved by Chance Parsons AKA Half-Qilin

#include <stdio.h>

long long len;
double price;
double totalPrice, w, h;
long long n = 0;

int main() {
	scanf("%lf", &price);
	scanf("%lld", &len);
	while (n < len) {
	  scanf("%lf %lf", &w, &h);
      totalPrice += w * h * price;
      n++;
	}
	printf("%lf", totalPrice);
}