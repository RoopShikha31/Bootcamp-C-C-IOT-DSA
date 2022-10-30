#include <stdio.h>

int main()
{
  int N,Reverse=0,R;
  printf("Reverse of given number:\n");
  printf("Enter a number:");
  scanf("%d",&N);
  
   while(N!=0)   {
    R=N%10;
   Reverse=Reverse*10+R;
   N=N/10;
   }

   printf("Reverse of given number is %d\n",Reverse);
  
     return 0;
}
