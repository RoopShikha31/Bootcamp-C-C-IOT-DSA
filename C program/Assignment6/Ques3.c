#include <stdio.h>

int main()
{
  int N,i,sum=0;
  printf("Calculate the sum of first N odd natural number:\n");
  printf("Enter a number:");
  scanf("%d",&N);
    for(i=0;i<=N;i++)
   {
    printf(" %d \n",2*i+1);
    sum=sum+2*i+1;
   }
   printf("Sum of first given N odd natural number is %d\n",sum);
  
     return 0;
}

