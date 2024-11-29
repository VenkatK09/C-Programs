#include <stdio.h>
int oddeven();
int main() {
oddeven();
}

int oddeven() {
int e;
printf("enter the number to check even or odd: ");
scanf("%d", &e);
if(e%2==0)
{
printf("the number is even\n ");
} else {
printf("the number is odd \n");
}
}

