#include<stdio.h> 
float main ()
{
float s;
printf ("What is the time in seconds ?\n");
scanf("%f",&s);
float m = s/60 ;
printf("The time in minutes is %f\n",m);
float h = s/3600 ;
printf("The time in hours is %f\n",h);
}
