#include <stdio.h>

int main()
{
    int a[10],i,min=100000;
    printf("Enter a 10 number:\n");
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
       if(min>a[i])
        min=a[i];
        
    }
        printf("min value is = %d\n",min);
       
    return 0;
}