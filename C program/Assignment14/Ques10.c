#include <stdio.h>

int main()
{
    int a[30],b[30];
    int i,n;
    printf("Enter a n element:\n");
    scanf("%d",&n);
    printf("Enter a  element:\n");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
       b[i]=a[i];
    }
      printf("\nThe element stored in first array: \n");
     for(i=0;i<n;i++)
     {
         printf(" %d",a[i]);
     }
     printf("\n\nThe element copied  into second array:\n");
      for(i=0;i<n;i++)
      {
         printf(" %d",b[i]);
     }
     
     printf("\n\n");
     
    return 0;
}