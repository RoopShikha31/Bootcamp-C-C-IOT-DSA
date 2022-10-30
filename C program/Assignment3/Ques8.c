
#include <stdio.h>

int main()
{
    int x;
    printf("check whether a given year is a leap year or not.:\n");
    printf("Enter a year:\n");
    scanf("%d",&x);
    
    if(x%100==0)
       {
        if(x%400==0)
          printf("Leap year");
        else
          printf("Not leap year");
         }
    else{
        if (x%4==0)
          printf("Leap year");
        else
           printf("Not leap year");
    }
    return 0;
}