#include<iostream>
uint64_t n,f;int i,m;int main(){std::cin>>n;f=n;while(f/=2)i++;m=i-1;while(i--!=-1)if(n&(1UL<<i+1))f|=(1UL<<(m-i));std::cout<<f;}