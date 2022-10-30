#include <stdio.h>

int main()
{
  int N,fact=1,i;
  printf("Calculate the factorial of a number:\n");
  printf("Enter a number:");
  scanf("%d",&N);
    for(i=1;i<=N;i++)
   {

    fact=fact*i;
   }
   printf("Factorial of %d is %d\n",N,fact);
  
     return 0;
}

