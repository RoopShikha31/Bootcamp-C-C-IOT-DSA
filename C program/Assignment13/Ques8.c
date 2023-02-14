//Write a recursive function to print first N terms of Fibonacci series
#include <stdio.h>
int fib(int x);
int main()
{
    int num,i;
    printf("Enter a number ");
    scanf("%d",&num);
     
     for(i=0;i<=num;i++)
        printf(" %d ",fib(i));
    return 0;
}
int fib(int x)
{
    if(x==0 || x==1)
     return x;
    return fib(x-1)+fib(x-2);
}
