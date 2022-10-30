#include <stdio.h>

int main()
{
  int N,i;
  printf("Print the first N natural number in reverse order:\n");
  printf("Enter a number:");
  scanf("%d",&N);
   for(i=N;i>=1;i--)
    printf("%d\n",i);
    
     return 0;
}

