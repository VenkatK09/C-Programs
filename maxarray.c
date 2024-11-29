#include <stdio.h>
int marks[3];
int main(){
int i;
printf("enter the numbers: ");
for(i=0;i<=2;i++){
scanf("%d",&marks[i]);
}
if(marks[0]>marks[1]){
  if (marks[0]>marks[2]){
  printf("greast number is %d ",marks[0]);
  }else {
  printf("greast number is %d",marks[2]);
  }
  } else {
  if (marks[1]>marks[2]){
  printf("greast number is %d",marks[1]);
  }else {
  printf("greast number is %d",marks[2]);
  }
  }
  
  }
