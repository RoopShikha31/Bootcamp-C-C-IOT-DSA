#include <stdio.h>

int main()
{
    int a[10],i,so=0,se=0;
    printf("Enter a 10 number:\n");
    for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
       if(a[i]%2==0)
         se=se+a[i];
        else
          so=so+a[i];
    }
        printf("Sum of all even number is %d\n",se);
        printf("Sum of all odd number is %d ",so);
    return 0;
}
