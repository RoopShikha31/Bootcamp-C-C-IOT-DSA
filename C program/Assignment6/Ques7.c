#include <stdio.h>

int main()
{
  int N,count=0,i;
  printf("Count a digit of given number:\n");
  printf("Enter a number:");
  scanf("%d",&N);
  
   while(N>0)   {
    N=N/10;
    count=count+1;
   }

   printf("Number of digit %d\n",count);
  
     return 0;
}
