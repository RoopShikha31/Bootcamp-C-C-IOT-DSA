#include <stdio.h>

int main()
{
  int N,i;
  printf("Print the cube of first N natural number:\n");
  printf("Enter a number:");
  scanf("%d",&N);
    for(i=0;i<=N;i++)
    printf("%d\n",i*i*i);
  
     return 0;
}

