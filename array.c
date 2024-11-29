#include<stdio.h>
int main(){
int arr[30],element,num,i,location ;
printf("\n ENter no of elements");
scanf("%d",&num);
for(i=0;i< num;i++)
scanf("%d",&element);
printf("\n Enter the location");
scanf("%d",&location);
for(i=num;i>=location;i--)
arr[i]=arr[i-1];
num++;
arr[location-1]=element ;
for(i=0;i<num;i++)
printf("\n %d",arr[i]);
return 0 ;
}

