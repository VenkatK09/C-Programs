#include<stdio.h>
  
int main()
{
    int a[10],i,key,n;
    printf("How many elements?");
    scanf("%d",&n);

    
    printf("Enter array elements:n\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("Enter element to search:\n");
    scanf("%d",&key);
     
    for(i=0;i<n;i++)

        if(a[i]==key)
//count++;

            break;
     
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
  
    return 0;
}

