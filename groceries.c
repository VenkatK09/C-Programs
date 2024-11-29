#include<stdio.h>
float main(){
float a,b,c,d,e;
printf("Enter price of item 1\n");scanf("%f",&a);
printf("Enter price of item 2\n");scanf("%f",&b);
printf("Enter price of item 3\n");scanf("%f",&c);
printf("Enter price of item 4\n");scanf("%f",&d);
printf("Enter price of item 5\n");scanf("%f",&e);
float sum = a+c+b+d+e ;
printf("Item 1 price=%f \n",a);
printf("Item 2 price =%f\n ",b);
printf("Item 3 price=%f \n",c);
printf("Item 4 price=%f \n",d);
printf("Item 5 price=%f \n",e);
printf("Total amount to be paid =%f\n",sum);
}
