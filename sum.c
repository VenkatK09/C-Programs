#include<stdio.h>
int sum(int n){
if (n==1)
return 1;
else
return n + sum(n-1);
}
int main()
{
int n;
printf("Enter a +ve integer");
scanf("%d",&n);
if (n>0)
printf("%d",sum(n));
else
printf("Enter +ve integer");
return 0;
}
