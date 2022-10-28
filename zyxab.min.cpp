#include<stdio.h>
#include<iostream>
int l;std::string c,b="neibb!";int main(){scanf("%d",&l);main:while(l-->=0){std::cin>>c;if(c.size()<5)goto main;for(int i=0;i<c.size()-1;i++)for(int j=i+1;j<c.size();j++)if(c[i]==c[j])goto main;if(b=="neibb!")b=c;if(b.size()>c.size())b=c;if(b.size()==c.size()&&b<c)b=c;}std::cout<<b;}