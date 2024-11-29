#include<stdio.h>
void main(){
char c ;
printf("enter an alphabet\n");
scanf("%c",&c);
if (c>= 'A' && c<='Z')
printf("Uppercase\n");
else if (c>= 'a' && c<= 'z')
printf("Lowercase \n");
}
