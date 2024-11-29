#include<stdio.h>
int main(){
int a ,b,s,choice ;
printf("Enter a and b \n");
scanf("%d%d",&a,&b);
printf("1 Addition , 2 Subtraction , 3 Multiply , 4 Divide ");
scanf("%d",& choice);
switch (choice){
case 1 : 
printf("%d",a+b);
break ;
case 2 : 
printf("%d",a-b);
break ; 
case 3: 
printf("%d",a*b);
break ;
case 4: 
printf("%d",a/b);
break ;
default :
printf("None") ;
}}

