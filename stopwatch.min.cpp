#include<iostream>
int l,t,a,b;int main(){std::cin>>l;if(l&1)printf("still running");else{while(l){std::cin>>a>>b;t+=b-a;l-=2;}std::cout<<t;}}