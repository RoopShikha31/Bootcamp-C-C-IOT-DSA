
#include <stdio.h>
void printReverse(int);

int main()
{
    int num; 
    printf("Enter a number");
    scanf("%d",&num);
    printReverse(num);
    printf("\n");

    return 0;
}
void printReverse(int n)
{
    int lastDigit,reverse=0;
      while(n!=0){
          lastDigit=n%10;;
      reverse=reverse*10+lastDigit;
      n=n/10;
          
      }
      printf("Reverse of a number is %d\n",reverse);
        }
    