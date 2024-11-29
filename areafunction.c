#include <stdio.h>
int area();
int perimeter();
int main() {
int choice;
printf("1->area\n2->perimeter\n");
printf("enter the choice: ");
scanf("%d",&choice);
switch(choice){
case 1 :
 area();
   break;
   
case 2 :
perimeter();
   break;
 
default :
   printf("invalid choice");
   

 }
 }
 
 int area(){
 int a,l;
 printf("enter the length of square : ");
 scanf("%d",&l);
 a=l*l;
 printf("%d",a); 
 }
 
 int perimeter() {
 int l,s;
 printf("enter the length of square : ");
 scanf("%d",&l);
 s=4*l;
 printf("%d",s);
 }

