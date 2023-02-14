//Write a function to find the first occurrence of adjacent duplicate values in the array.
//Function has to return the value of the element.

#include<stdio.h>
int main()
{
    int a[30];
    int i,j,n,temp;
    printf("Enter a n element:\n");
    scanf("%d",&n);
    printf("Enter a  element:\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
      
    for(i=0;i<n;i++)
    {
        {
         if(a[i]==a[i+1])
         {
           printf("%d ",a[i]);
         }
         }
    }
    return 0;
}