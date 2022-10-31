
#include <stdio.h>

int main()
{
    int N,prev=0,cur=1,next=0,i;
    printf("Enter a number: ");
    scanf("%d",&N);
   
    for(i=0;i<N-1;i++){
        next=prev+cur;
        prev=cur;
        cur=next;
        if(next==N){
            printf("Number found");
            break;
        }
        if(next >N){
            printf("Number not found");
            break;
        }
    }
 
    return 0;
}
