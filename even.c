#include<stdio.h>
int main (){
int i,n;
printf("Limit of even no to be printed ?\t");
scanf("%d",&n);
for ( i=0; i<=n ; i=i+2 )
{
printf("%d\t",i);
}
}
