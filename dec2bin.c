#include<stdio.h>
#include<math.h>
long decimaltobinary(int decnum)
{
long binnum = 0;
int rem ,temp=1 ;
while (decnum!=0)
{
rem=decnum%2;
decnum=decnum/2;
binnum=binnum+rem*temp;
temp=temp*10;
}
return binnum ;
}
int main ()
{
int decnum ;
printf("Enter a decimal number\n");
scanf("%d",&decnum);
printf("THe binary num is %ld \n",decimaltobinary(decnum));
return 0;
}
