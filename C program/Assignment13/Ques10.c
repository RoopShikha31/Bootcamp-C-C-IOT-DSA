//Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
int power(int n,int p);

int main()
{
    int num,a,p;
    printf("Enter a number: ");
    scanf("%d",&num);
     printf("Enter a power: ");
    scanf("%d",&p);
    a=power(num,p);
    printf("Power of %d is %d",num,a);
    printf("\n");
    return 0;
}
int power(int n,int p)
{
    if(p==0)
      return 1;
    else
      return n*power(n,p-1);
} 