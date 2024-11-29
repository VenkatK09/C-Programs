#include <stdio.h>
void add();
void mul();
void sub();
void div();
int main() {
 add();
 mul();
 sub();
 div();
}
void add(){
int a,b,s;
printf("enter the values of a & b: ");
scanf("%d%d",&a,&b);
s=a+b;
printf("%d\n",s);
}

void sub(){
int a,b,s;
printf("enter the values of a & b: ");
scanf("%d%d",&a,&b);
s=a-b;
printf("%d\n",s);
}

void mul(){
int a,b,s;
printf("enter the values of a & b: ");
scanf("%d%d",&a,&b);
s=a*b;
printf("%d\n",s);
}

void div() {
int a,b,s;
printf("enter the values of a & b: ");
scanf("%d%d",&a,&b);
s=a/b;
printf("%d\n",s);
}



