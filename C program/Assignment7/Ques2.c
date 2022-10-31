
#include <stdio.h>

int main()
{
    int N,prev=0,cur=1,next=0,i;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf(" 0 ");
    printf(" 1 ");
    for(i=0;i<N-2;i++){
        next=prev+cur;
        printf(" %d ",next);
        prev=cur;
        cur=next;
    }
    
    

    return 0;
}
