// Solving Kattis Erase Securely
// Solved by Chance Parsons AKA Half-Qilin

#include <iostream>

bool p[1000];
char check;
int len=0, n;

int main() {
	std::cin>>n;
	while(check!='0'&&check!='1')check=getchar();
	while(check=='0'||check=='1') {
		p[len]=check=='1';
		len++;
		check=getchar();
	}
	if(n%2){
		for(int i=0; i < len; i++) p[i]=!p[i];
	}
	check=' ';
	n = 0;
	while(check!='0'&&check!='1')check=getchar();
	while(check=='0'||check=='1'&&n<len) {
		if (check!=(p[n]?'1':'0')) {
			printf("Deletion failed");
			return 0;
		};
		n++;
		check = getchar();
	}
	printf("Deletion succeeded");
	return 0;
}