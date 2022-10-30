#include <stdio.h>

int main()
{
   int x;
    printf("check whether a given number is positive, negative or zero.:\n");
    printf("Enter a number:\n");
    scanf("%d",&x);
    if(x>0)
       printf("%d is positive",x);
       
    else if(x<0)
       printf("%d is negative",x);
    else
        printf(" zero");
     
     return 0;
}
