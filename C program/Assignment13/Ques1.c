//Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int sumN(int n);

int main()
{
    int num,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=sumN(num);
    printf("sum %d",a);
    printf("\n");
    return 0;
}
int sumN(int n)
{
    if(n!=0)
      return n+sumN(n-1);
    else
      return n;
} 