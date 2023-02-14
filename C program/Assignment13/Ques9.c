//Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int countDigit(int n);

int main()
{
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    count=countDigit(num);
    printf("Total count is %d", count);
    printf("\n");
    return 0;
}
int countDigit(int n)
{
   static int count=0;
    if(n>0)
    {
      count++;
      countDigit(n/10);
    }
    
      return count;
}
