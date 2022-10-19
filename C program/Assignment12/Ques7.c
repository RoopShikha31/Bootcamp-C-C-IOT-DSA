

#include <stdio.h>
void printSquare(int);

int main()
{
    int num; 
    printf("Enter a number");
    scanf("%d",&num);
   printSquare(num);
    printf("\n");

    return 0;
}
void printSquare(int n){
    if(n>0){
        printSquare(n-1);
        printf("%d\n",n*n);
        
         
        
       
    }
}
