#include <stdio.h>

int main()
{
  int N,i;
  printf("Print the first N odd natural number in reverse order:\n");
  printf("Enter a number:");
  scanf("%d",&N);
   for(i=N;i>=1;i--)
    printf("%d\n",2*i-1);
     return 0;
}
