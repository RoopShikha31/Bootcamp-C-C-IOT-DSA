#include <stdio.h>

int main()
{
  int x;
    printf("Program which takes the month number as an input and display number of days in that month:\n");
    printf("Enter month number:\n");
    scanf("%d",&x);
    if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
       printf("31 days");
    else if(x==4||x==6||x==9||x==11)
       printf("30 days");
    else
       printf("28 or 29 days");
     return 0;
}

