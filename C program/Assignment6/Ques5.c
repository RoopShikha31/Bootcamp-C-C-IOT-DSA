#include <stdio.h>

int main()
{
  int N,i,sum=0;
  printf("Calculate the sum of cubes of first N natural number:\n");
  printf("Enter a number:");
  scanf("%d",&N);
    for(i=0;i<=N;i++)
   {
    printf(" %d \n",i*i*i);
    sum=sum+i*i*i;
   }
   printf("Sum of cubes of first N natural number is %d\n",sum);
  
     return 0;
}
