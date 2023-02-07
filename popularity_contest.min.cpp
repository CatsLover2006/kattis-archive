#include<iostream>
int f,c,i;int main(){std::cin>>f>>c;int m[f];for(i=f;i--;)m[i]=-1-i;for(c*=2;c--;){std::cin>>i;m[i-1]++;}for(i=-1;++i<f;)printf("%d ",m[i]);}
