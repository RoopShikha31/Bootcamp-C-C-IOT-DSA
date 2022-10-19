
#include <stdio.h>
void printEven(int);

int main()
{
    int num; 
    printf("Enter a number");
    scanf("%d",&num);
   printEven(num);
    printf("\n");

    return 0;
}
void printEven(int n){
    if(n>0){
        printf("%d\n",2*n);
        printEven(n-1);
         
        
       
    }
}
