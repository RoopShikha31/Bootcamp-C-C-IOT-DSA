//Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void printN_odd(int n);
void main()
{
    int n;
    printf("Enter a number:");
   scanf("%d",&n);
    printN_odd(n);
}
void printN_odd(int n)
{
   
    int i;
    
   for(i=0;i<=n;i++)
   {
       printf("%d\n",2*i+1);
       
   }
 

}