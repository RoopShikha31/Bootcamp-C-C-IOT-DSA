
#include <stdio.h>
void printOdd(int);

int main()
{
    int num; 
    printf("Enter a number");
    scanf("%d",&num);
    printOdd(num);
    printf("\n");

    return 0;
}
void printOdd(int n){
    if(n>0){
         printf("%d\n",2*n-1);
        
        printOdd(n-1);
        
       
    }
}
