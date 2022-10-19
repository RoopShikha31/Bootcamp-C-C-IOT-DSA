
#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    y=(x%10)*100+(x/10);
    printf("%d",y);

    return 0;
}
