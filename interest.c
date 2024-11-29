#include<stdio.h>
#include<math.h>
int main () {
float P,r,n,t,c ;
printf("What is the initial pricipal amount and the rate of interest ?\n");
scanf("%f%f",&P,&r);

printf("What are the number of times interest applied per time period?\n");
scanf("%f",&n);

printf("what is the time period elapsed?\n");
scanf("%f",&t);

float s = (P*t*r)/100 ;
printf("Simple interest is %f\n",s);

float h = 1+(r/n) , g = n*t ;
c = P * pow(h,g) -P;

printf("Compound interst is %f\n",c);

}
