
#include <stdio.h>

int main()
{
    int x;
    printf("Check a given number is divisible 5 or not:\n");
    printf("Enter a number:\n");
    scanf("%d",&x);
    if(x%5==0)
    printf("%d is divisible by 5",x);
    else
    printf("%d is not divisible by 5",x);

    return 0;
}
