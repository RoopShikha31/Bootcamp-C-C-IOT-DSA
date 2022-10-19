#include <stdio.h>

int main()
{
    float x,y;
    printf("Enter a amount in INR and convert it into USD\n");
    scanf("%f",&x);
    y=(x/76.23);
    printf("%.3fUSD",y);

    return 0;
}
