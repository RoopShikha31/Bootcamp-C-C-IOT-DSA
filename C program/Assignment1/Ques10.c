#include<stdio.h>
int main()
{
    int Day,Month,Year;
    printf("Enter date in DD/MM/YYYY format\n");
    scanf("%d/%d/%d",&Day,&Month,&Year);
    printf("Day - %d, Month - %d, Year - %d",Day,Month,Year);
}