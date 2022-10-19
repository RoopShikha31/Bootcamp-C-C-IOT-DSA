#include<stdio.h>
int main()
{
    int a,b,x;
    while(1){
    printf("\n\n*************************\n\n");
    printf("Enter a choice:");
    scanf("%d",&x);
    printf("1.Addition:\n 2.Subtraction:\n 3.Multiplication:\n 4.Division:\n");
    printf("Enter a number");
    scanf("%d %d",&a,&b);
        switch(x){
            case 1:printf("Sum is %d",a+b);
            break;
               case 2:printf("Difference is %d",a-b);
               break;
               
                  case 3:printf("Product is %d",a*b);
                  break;
                     case 4:printf("Quotient is %d",a/b);
                     break;
                       default: 
                       printf("Invalid choice");
                        
        }
    }
}
    