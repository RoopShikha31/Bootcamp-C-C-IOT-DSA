//Write a function to sort an array of any size. 
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
        for(j=i+1;j<n;j++){
         if(a[i]>a[j])
         {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
         }
         }
    }
    printf("Sorting of given array is:\n");
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
    
    return 0;
}