#include<stdio.h>
void sum(){
int a,b,s;
printf("Enter a and b \n");
scanf("%d%d",&a,&b);
s=a+b;
printf("Sum is %d\n",s);
}
void sub(){
int a,b,d;
printf("Enter a and b \n");
scanf("%d%d",&a,&b);
d=a-b;
printf("Difference is %d\n",d);
}
int main(){
sum();
sub();
return 0;
}
