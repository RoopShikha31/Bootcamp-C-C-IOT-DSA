#include <stdio.h>

int main()
{
  int N,i;
  printf("Print the first N even natural number:\n");
  printf("Enter a number:");
  scanf("%d",&N);
   for(i=1;i<=N;i++)
    printf("%d\n",2*i);
     return 0;
}

