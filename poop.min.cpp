#include<iostream>
#include<cmath>
long long l,k,n,t,p;int main(){std::cin>>l>>n;while(n){k++;t=l;p=9;while(p--)while(pow(10,p)*n<t)t-=pow(10,p)*n;n-=t;}std::cout<<k;}
