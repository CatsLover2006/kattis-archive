// Solving Kattis Aaah!
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

int aah;
char l;

int main() {
	while(l!='a'&&l!='h') l=getchar();
	while(l!='h') {l=getchar();aah++;}
	l=' ';
	while(l!='a'&&l!='h') l=getchar();
	while(l!='h') {l=getchar();aah--;}
	if(aah < 0) printf("no");
	else printf("go");
	return 0;
}