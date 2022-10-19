#include <stdio.h>

int main()
{
   int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
     switch(x>0){
         case 1:printf("positive number into negative number is %d",-x);
         break;
          case 0:printf("negative number into positive number is %d",(-x));
     }
         return 0;
}