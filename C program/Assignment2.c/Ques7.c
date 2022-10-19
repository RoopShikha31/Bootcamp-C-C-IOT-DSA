
#include <stdio.h>

int main()
{
    int x,count=0;
    int res=0;
    printf("Enter the number\n");
    scanf("%d",&x);
    while(x!=0){
        res=x&1;
        count++;
        if(res==1)
        {
            printf("Position at %d",count);
            break;
        }
        x=x>>1;
    }

    return 0;
}