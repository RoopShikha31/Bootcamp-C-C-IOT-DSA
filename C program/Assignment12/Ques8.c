#include <stdio.h>
void dtob(int);

int main()
{
    int num; 
    printf("Enter a number ");
    scanf("%d",&num);
    dtob(num);
    printf("\n");

    return 0;
}
void dtob(int x)
{
    if(x>0)
      {
        dtob(x/2);
        printf("%d",x%2);
          
      }
      
        }
    