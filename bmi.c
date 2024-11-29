#include<stdio.h>
float main(){
float w,h;
printf("What is your height and weight ? \n");
scanf("%f%f",&h,&w);
float x=w/h ;
if (x<18.5) {
printf("Underweight\n");}
else if (x<=18.5 && x>=24.9){
printf("Normal weight\n");}
else {
printf("Over weight\n");}
}
