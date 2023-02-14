
//Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int sum_of_even(int n);

int main()
{
    int num,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=sum_of_even(num);
    printf("sum is %d",a);
    printf("\n");
    return 0;
}
int sum_of_even(int n)
{
    if(n!=0)
      return(2*n+sum_of_even(n-1));
    else
      return n;
} 
