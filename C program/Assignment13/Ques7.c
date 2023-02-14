//Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int hcf(int a,int b);

int main()
{
    int a,b,res;
    printf("Enter a number ");
    scanf("%d  %d",&a,&b);
     res = hcf(a,b);
     printf("%d",res);
    return 0;
}
int hcf(int a,int b)
{
    if(b!=0)
       return hcf(b,a%b);
       return a;
    
}
