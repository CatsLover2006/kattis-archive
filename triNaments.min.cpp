#include<stdio.h>
#include<cmath>
int n;float a,b,c,A,t;int main(){scanf("%i",&n);while(n--){scanf("%f%f%f",&a,&b,&c);A=(c*c+b*b-a*a)/(2*c*b);c/=2;t+=2*sin(acos(A))/sqrt(c*c+b*b-2*c*b*A)*c*b;}printf("%f",t);}