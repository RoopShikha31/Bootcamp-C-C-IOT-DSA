
#include <stdio.h>

int main()
{
    int a[10]={2,2,3,1,4,5,1,7,8,2};
    int freq[100]={0},i,n;
 
    for(i=0;i<10;i++)
    {
        freq[a[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(freq[i]!=0 )
        printf("%d ==> %d\n",i,freq[i]);
    }

    return 0;
}
