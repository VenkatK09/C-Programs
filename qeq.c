#include<stdio.h>
#include<math.h>
int main(){
float a ,b,c ,dis ,r1,r2,rp,ip;
printf("Give the coefficients of the equation a , b, c ");
scanf("%f%f%f",&a,&b,&c);
dis = b*b - 4*a*c ;
switch (dis > 0){
case 1 : 
r1=(-b + sqrt(dis))/2*a;
r2=(-b - sqrt(dis))/2*a;
printf ("r1 and r2 are : %f \t %f \n", r1,r2);
break ;
case 0 :
switch (dis == 0){
case 1 : 
r1=r2=-b/(2*a);
printf("roots are %f \t %f \n ",r1,r2 );
break ;
case 0 :
rp=-b/(2*a);
ip=sqrt(-dis)/(2*a) ;

printf("roots are %f+%f,%f-%f \n "  , rp ,ip,rp,ip);
break ;
}
break;
}

}

