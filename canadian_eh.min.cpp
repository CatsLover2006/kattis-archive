#include<iostream>
std::string c,l="Imposter!";int main(){getline(std::cin,c);if(c.substr(c.length()-3,3)=="eh?")l="Canadian!";std::cout<<l;}
