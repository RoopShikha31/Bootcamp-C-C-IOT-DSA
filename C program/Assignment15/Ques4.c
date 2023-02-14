
#include <stdio.h>

int main()
{
    int a[5]={1,7,9,5,8};
    int d=2,i,n;
  
    while(d!=0)
    {
        int temp = a[4];
        for(i=4;i>=1;i--)
        {
            a[i]=a[i-1];
        
        }
        a[0]=temp;
        d--;
    }
    
    for(i=0;i<5;i++)
    printf("%d ",a[i]);

    return 0;
}