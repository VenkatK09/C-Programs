#include<stdio.h>
int main(){
int a,b,c,d,e;
printf("What are your math marks?\n");scanf("%d",&a);
printf("math marks=%d \n",a);
printf("What are your eng marks?\n");scanf("%d",&b);
printf("eng marks=%d \n ",b);
printf("What are your phys marks?\n");scanf("%d",&c);
printf("phys marks=%d\n",c);
printf("What are your chem marks?\n");scanf("%d",&d);
printf("chem marks=%d\n",d);
printf("What are your sanskrit marks?\n");scanf("%d",&e);
printf("sanskrit marks=%d\n",e);
int sum = a+c+b+d+e ;
printf("TOTAL=%d\n",sum);
}
