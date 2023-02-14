//Write a function to find the greatest number from the given array of any size.
#include<stdio.h>
int main()
{
    int a[30];
    int i,j,n,max=0;
    printf("Enter a n element:\n");
    scanf("%d",&n);
    printf("Enter a  element:\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
         for(j=i+1;j<n;j++)
         {
             if(a[i]>max)
             max=a[i];
             
        }
      
    }
   
    {
        printf("The largest number is %d ",max);
    }
    return 0;
}
