#include<stdio.h>
float main(){
float x;
printf("What is amount of purchase? \n");
scanf("%f",&x);
if (x<=1000 && x >=1) {
printf("5% Discount \n");}
else if (x<=5000 && x>=1001){
printf("10% Discount\n");}
else if (x >= 5001 && x <= 10000) {
printf("20% Discount\n");}
}


