#include<stdio.h>
void insert(int a[15] ,int el )
{
int i ;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
if(a[i]>a[i-1])
i=i-1;
}
for(i=10;a[i-1]<el;i--)
a[i]=a[i-1];
a[i]=el;
printf("\nThe array after inserting %d is :",el);
for(i=0;i<11;i++)
printf("%2d\t",a[i]);
}
int main(){
int a[15]={1 , 2, 3,4,5,6,7,8,9,10,11,12,13,14,15} ;
printf("%2d\n",insert(a,60));
}
