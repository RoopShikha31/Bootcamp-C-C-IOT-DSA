#include <stdio.h>

int main()
{
  int N,i,sum=0;
  printf("Calculate the sum of first N even natural number:\n");
  printf("Enter a number:");
  scanf("%d",&N);
    for(i=0;i<=N;i++)
   {
    printf(" %d \n",2*i);
    sum=sum+2*i;
   }
   printf("Sum of first given N even natural number is %d\n",sum);
  
     return 0;
}
