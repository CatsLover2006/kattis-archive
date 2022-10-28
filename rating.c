// Solving Kattis Rating Problem
// Solved by Chance Parsons AKA Half-Qilin

#import <stdio.h>

long long len = 0;
long long judged = 0;
long long i = 0;
long long j = 0;
double avg = 0;
double tmp = 0;

int main() {
	scanf("%lld %lld", &len, &judged);
	int list[len];
	i = 0;
	avg = 0;
	while (i < len) {
		if (scanf("%lld", &j) == 1) {
			list[i] = j;
		} else {
			list[i] = 5;
		}
		i++;
	}
	i = 0;
	while (i < len) {
	  if (list[i] == 5) avg -= 3;
	  else avg += list[i];
	  i++;
	}
	avg /= len;
	printf("%8.5f ", avg);
	avg = 0;
	i = 0;
	while (i < len) {
	  if (list[i] == 5) avg += 3;
	  else avg += list[i];
	  i++;
	}
	avg /= len;
	printf("%8.5f", avg);
}