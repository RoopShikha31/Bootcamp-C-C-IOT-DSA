
#include <stdio.h>

int main()
{
    int x,y,z;
    printf("find the greatest among three given numbers.:\n");
    printf("Enter a number:\n");
    scanf("%d %d %d",&x,&y,&z);
    
    if(x>=y && x>=z)
       printf("%d is greater",x);
      if(y>=x && y>=z)
       printf("%d is greater",y);
         if(z>=x && z>=y)
       printf("%d is greater",z);
     return 0;
}


