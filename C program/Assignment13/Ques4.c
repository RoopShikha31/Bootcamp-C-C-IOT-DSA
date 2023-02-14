//Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>
int sum_of_square(int n);

int main()
{
    int num,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=sum_of_square(num);
    printf("sum is %d",a);
    printf("\n");
    return 0;
}
int sum_of_square(int n)
{
    if(n!=0)
      return(n*n+sum_of_square(n-1));
    else
      return n;
} 
