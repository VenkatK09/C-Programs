#include <stdio.h>
#include <math.h>
int main(){
 int i,num;
 int isprime=1;
 printf("enter the number: ");
 scanf("%d",&num);
 if (num <=1) {
 isprime=0;
 } else {
 for(i=2; i <= sqrt(num);i++);{
 if (num%i ==0){
 isprime=0;
 }
 }
 }
 if (isprime){
 printf("%d is a prime number.\n",num);
 }else
 printf("%d is not a prime number.\n",num);
}

