
#include <stdio.h>

int main()
{
    int D,b,a,c;
    printf("Given quadratic equation are real and distinct,real and equal ,imaginary:\n");
    printf("Enter a number:\n");
    scanf("%d %d %d",&a,&b,&c);
    D= b*b - 4*a*c;
    if(D>0){
    printf("Real and distinct");
    }
    else if (D==0){
    printf("Real and equal");
    }
    else
     printf("Imaginary");
    
    return 0;
}
