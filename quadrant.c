#include<stdio.h>
float main(){
float x,y ;
printf("Give x and y co-ordinates.. \n");
scanf("%f%f",&x,&y);
if (x>0 && y>0){
printf("Q1\n");}
else if (x>0 && y<0){
printf("Q4\n");}
else if (x<0 && y<0){
printf("Q3\n");}
else {
printf("Q2\n");}}
