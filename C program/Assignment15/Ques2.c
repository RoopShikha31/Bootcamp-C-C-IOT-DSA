//Write a function to find the smallest number from the given array of any size.
#include<stdio.h>
int main()
{
    int a[30];
    int i,j,n;
    printf("Enter a n element:\n");
    scanf("%d",&n);
    printf("Enter a  element:\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
      int min=a[0];
    for(i=0;i<n;i++)
    {
         if(a[i]<min)
           min=a[i];
    }
      printf("The smallest number is %d\n",min);
    
    return 0;
}