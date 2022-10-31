#include <stdio.h>

int main()
{
    int a,b,hcf,i;
    printf("Enter a number: ");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a || i<=b;i++)
    {
    if(a%i==0 && b%i==0)
     hcf=i;
    }
    if(hcf==1)
     printf("Co-prime");
     else
     printf("Not Co-prime");

    return 0;
}
