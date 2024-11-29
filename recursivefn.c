#include <stdio.h>
int Fact(int n);
int main() {
int n,R;
printf("enter the number to be factorialised\n");
scanf("%d",&n);
R=Fact(n);
printf("%d",R);
}

int Fact(int n){
if (n==1){
return 1;
} else{
return n*Fact(n-1);
}
}
