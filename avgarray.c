#include <stdio.h>

int i,n=5,t,avg;
int main(){
int marks[5];
int i;
printf("enter the marks of the students: ");
for(i=0;i<=4;i++){
scanf("%d",&marks[i]);
}
t= sum();
avg=t/n;
}

int sum(int marks[], int n)
{
    
    if (n == 0) {
        return 0;
    }
    else {
        
        return marks[0] + sum(marks + 1, n - 1);
    }
}

