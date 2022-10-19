
#include <stdio.h>
void printNatural(int);

int main()
{
    int num; 
    printf("Enter a number");
    scanf("%d",&num);
    printNatural(num);
    printf("\n");

    return 0;
}
void printNatural(int n){
    if(n>0){
         printf("%d\n",n);
        printNatural(n-1);
       
    }
}
