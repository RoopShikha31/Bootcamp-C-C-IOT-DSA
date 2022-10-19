#include <stdio.h>

int main()
{
    int x;
    printf("Enter the var:\n");
    scanf("%d",&x);
     switch(x){
         case 1:printf("Good");
         break;
          case 2:printf("Better");
         break;
          case 3:printf("Best");
         break;
          default:
          printf("invalid");
         break;
         
     }

    return 0;
}