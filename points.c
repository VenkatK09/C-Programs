#include<stdio.h>
#include<ctype.h>
int main(){
char z;
printf("Enter anything\n");
scanf("%c",&z);
if (z==('a'|'A'|'e'|'E'|'I'|'i'|'o'|'O'|'u' |'U')) {
printf("5 points\n");}
else if (isdigit(z)){
printf("%c is number , so 10 points\n",z);}
}
