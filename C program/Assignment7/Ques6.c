#include <stdio.h>

int main()
{
    int N,i,flag=0;
    for(N=1;N<=100;N++)
    {
        flag=0;
        for(i=2;i<=N/2;i++)
        {
            if(N%i==0)
            flag=1;
        }
        if(flag==0)
          printf(" %d ",N);
    }
    return 0;
}
