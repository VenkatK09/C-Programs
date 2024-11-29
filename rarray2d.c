#include <stdio.h>
int main() {
int n,sum=0,avg;
int marks[80];
printf("enter the no.of marks to find avg:");
scanf("%d", &n);
printf("enter the marks\n");
for(int i=0;i<n;i++){
 scanf("%d",&marks[i]);
 sum=sum+marks[i];
 }
 
avg=sum/n;
printf("%d",avg);
}

