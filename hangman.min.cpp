#include<iostream>
std::string a,c;int e=0,d=0,w;int main(){getline(std::cin,a);getline(std::cin,c);for(int k:c){w=0;for(int l:a)if(k==l){d++;w=1;}e+=!w;if(d==a.size()){printf("WIN");break;}if(e==10){printf("LOSE");break;}}}
