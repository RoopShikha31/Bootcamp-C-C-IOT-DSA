
#include <stdio.h>

int main()
{
    int x;
    printf("Check a given number is even number or odd number :\n");
    printf("Enter a number:\n");
    scanf("%d",&x);
    if((x&1)==0)
    printf("%d is even number",x);
    else
    printf("%d is odd number",x);

    return 0;
}
