#include<stdio.h>
float main()
{
float n1 , n2 ,n3 ;
printf("give any three numbers\n");
scanf("%f%f%f", &n1,&n2,&n3);
if (n1>n2 && n1>n3){
printf("%f is the greatest\n",n1);}
else if (n2>n1 && n2>n3){
printf("%f is the greatest\n",n2);}
else {
printf("%fis the greatest\n",n3);}
}
