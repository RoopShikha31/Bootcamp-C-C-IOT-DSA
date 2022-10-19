#include <stdio.h>

int main()
{
    int a[30];
    int i,j,temp,n;
    printf("Enter a n element:\n");
    scanf("%d",&n);
    printf("Enter a  element:\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
         for(j=i+1;j<n;j++)
         {
             if(a[i]>a[j])
             {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
             }
             
         }
      
    }
   
    {
        printf(" The second smallest number is %d ",a[1]);
    }
    return 0;
}
