#include<stdio.h>
#include<math.h>
long long l,k,n,t,p;int main(){scanf("%lld%lld",&l,&n);while(n){k++;t=l;p=9;while(p--)while(pow(10,p)*n<t)t-=pow(10,p)*n;n-=t;}printf("%lld",k);}
