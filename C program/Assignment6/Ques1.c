#include <stdio.h>

int main()
{
  int N,i,S;
  printf("Calculate the sum of first N natural number:\n");
  printf("Enter a number:");
  scanf("%d",&N);
    for(i=0;i<=N;i++)
    S=N*(N+1)/2;
    printf("%d",S);
  
     return 0;
}

