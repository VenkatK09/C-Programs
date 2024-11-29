#include <stdio.h>
void mul();
int main()
{
mul();
}
void mul(){
int a,b,s;
printf("enter the values of a & b : ");
scanf("%d%d",&a,&b);
s=a*b;
printf("%d",s);
}
