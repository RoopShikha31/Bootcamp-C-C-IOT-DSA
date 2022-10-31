
#include <stdio.h>

int main()
{
    int N,i,flag=0,a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
      for(N=a; ;N++)
    {
        flag=0;
        for(i=2;i<=N/2;i++)
        {
            if(N%i==0)
            flag=1;
        }
        if(flag==0)
        {
          printf("Next prime number is %d ",N);
          break;
        }
    }
    return 0;
}