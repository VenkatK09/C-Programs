#include<stdio.h>
int main (){
int i,n;
printf("Limit of odd no to be printed ?\t");
scanf("%d",&n);
for ( i=1 ; i<=n ; i=i+2 )
{
printf("%d\t",i);
}
}
