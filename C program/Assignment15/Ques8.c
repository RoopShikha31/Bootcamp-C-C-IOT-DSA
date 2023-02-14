// Write a function in C to print all unique elements in an array

#include<stdio.h>
int main()
{
    int a[30];
    int i,j,n,c;
    printf("Enter a n element:\n");
    scanf("%d",&n);
    printf("Enter a  element:\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("Unique element of given array is:\n");
    for(i=0;i<n;i++)
    {
        c=0;{
            for(j=0;j<n;j++){
                if(i!=j){
                    if(a[i]==a[j])
                      c++;
                }
            }
         }
        if(c==0)
         {
      printf("%d ",a[i]);
         }
    }
    
    return 0;
}
