#include<stdio.h>
int main(){
int y ;
printf("Year = ?\n");
scanf("%d",&y);
if (y%4 == 0 &&( y%400 ==0||y%100 !=0)){
printf("Leap year\n");}
else 
printf("Not a leap year\n");
}
