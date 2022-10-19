#include <stdio.h>

int main()
{
    int x;
    int res;
    printf("Enter the number\n");
    scanf("%d",&x);
  
        res=x&1;
      
        if(res==1)
        
            printf("Odd");
           
        else
           printf("Even");
    

    return 0;
}