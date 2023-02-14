//Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int sum_of_odd(int n);

int main()
{
    int num,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=sum_of_odd(num);
    printf("sum is %d",a);
    printf("\n");
    return 0;
}
int sum_of_odd(int n)
{
    if(n!=0)
      return(2*n-1+sum_of_odd(n-1));
    else
      return n;
} 
