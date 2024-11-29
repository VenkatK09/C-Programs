#include <stdio.h>
void sum();
int main(){
sum();
}

void sum(){
int a,b,s;
printf("enter the values of a&b: ");
scanf("%d%d",&a,&b);
s=a+b;
printf("%d",s);
}
