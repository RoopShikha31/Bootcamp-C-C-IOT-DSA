//Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int sum_of_given(int n);

int main()
{
    int num,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=sum_of_given(num);
    printf("sum %d",a);
    printf("\n");
    return 0;
}
int sum_of_given(int n)
{
   int sum=0;
    if(n!=0)
     return sum_of_given(n/10)+n%10;
      }

