#include<stdio.h>
int main ()
{
int f ;
printf("What are your avg marks?\n");
scanf("%d",&f);
if (f>80){
printf("A grade\n");}
else if (f>60 && f<= 80){
printf("Bgrade\n");}
else if (f>40 && f<=60){
printf("Cgrade\n");}
else if (f<=40){
printf("Fgrade\n");}
}
