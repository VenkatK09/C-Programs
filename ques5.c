#include<stdio.h>
int area(int);
int perimeter(int);
int main(){
int num ,a ,p;
printf("Enter a num\n");
scanf("%d",&num);
printf("AREA = %d\n",area(num));
printf("PERIMETER = %d\n",perimeter(num));
}
int area(int x)
{
return(x*x);
}
int perimeter(int x)
{
return(4*x);
}
