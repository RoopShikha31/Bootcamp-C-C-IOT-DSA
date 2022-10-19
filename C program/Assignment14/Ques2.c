#include <stdio.h>

int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter a number ");
    for(i=0;i<9;i++)
       scanf("%d",&a[i]);
    for(i=0;i<9;i++)
        sum=sum+a[i];
    avg=sum/10;
    printf("Avg is %d",sum);
    return 0;
}