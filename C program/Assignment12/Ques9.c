//Write a recursive function to print octal of a given decimal number
#include <stdio.h>
void dtoo(int);

int main()
{
    int num; 
    printf("Enter a number ");
    scanf("%d",&num);
    dtoo(num);
    printf("\n");

    return 0;
}
void dtoo(int x)
{
    if(x>0)
      {
        dtoo(x/8);
        printf("%d",x%8);
          
      }
      
        }
    