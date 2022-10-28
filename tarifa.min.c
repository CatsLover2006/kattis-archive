#include <stdio.h>
int n,t,l;int main(){scanf("%d%d",&n,&l);n*=l+1;while(l--)scanf("%d",&t,n-=t);printf("%d",n-t);}
