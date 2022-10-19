#include <stdio.h>

int main()
{
    int a[10],i,max=-1;
    printf("Enter a 10 number:\n");
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
       if(max<a[i])
        max=a[i];
        
    }
        printf("max value is = %d\n",max);
       
    return 0;
}
