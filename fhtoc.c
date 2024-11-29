#include<stdio.h>
float main() {
float F;
printf("What is the temperature in FAHRENHEIT ?\n");
scanf("%f",&F);
float c = ((F-32)*5)/9 ; 
printf("The temperatureis celsius is %f\n",c);
}
