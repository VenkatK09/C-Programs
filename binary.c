#include <stdio.h>
#include <math.h> 
int main() 
{  
    int i, bin_num, decimal_num = 0, rem;  
    bin_num = 111;
    for (i = 0; bin_num != 0; ++i)  
    {  
        rem = bin_num % 10;  
        bin_num = bin_num / 10;  
        decimal_num = decimal_num + (rem) * ( pow (2, i));  
          
    }  
    printf ("\n Decimal Number of given binary number: %d", decimal_num);  
    return 0;  
}  
