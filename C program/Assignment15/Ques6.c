//Write a function in C to read n number of values in an array and display it in reverse
//order.
#include<stdio.h>
int main()
{
    int a[30];
    int i,n;
    printf("Enter a n element:\n");
    scanf("%d",&n);
    printf("Enter a  element:\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
      printf("Given Array in reverse order:");
           for(i=n-1;i>=0;i--)
        
           printf("%d ",a[i]);
        
    return 0;
}