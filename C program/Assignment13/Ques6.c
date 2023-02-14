//Write a recursive function to calculate factorial of a given numberWrite a recursive function to calculate factorial of a given number
#include <stdio.h>
int factorial(int n);

int main()
{
    int num,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=factorial(num);
    printf("Factorial of %d is %d",num,a);
    printf("\n");
    return 0;
}
int factorial(int n)
{
    if(n==1)
      return 1;
    else
      return n*factorial(n-1);
} 