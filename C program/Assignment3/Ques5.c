
#include <stdio.h>

int main()
{
    int x;
    printf("Check a given number is even number or odd number :\n");
    printf("Enter a number:\n");
    scanf("%d",&x);
    if(x>99 & x<1000)
    printf("%d is three digit number",x);
    else
    printf("%d is not three digit number",x);

    return 0;
}
