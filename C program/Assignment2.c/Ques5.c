#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter a three digit number\n");
    scanf("%d",&x);
    while(x>0)
    {
    sum=sum + (x%10);
    x=x/10;
    }
   
    printf("sum of given digit is%d",sum);
    
}