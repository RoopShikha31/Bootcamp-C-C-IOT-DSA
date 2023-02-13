//Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>

int main()
{
    int a[10][10],r,c,i,j,max=0,sum=0,index=0;
    printf("Enter number of row:");
    scanf("%d",&r);
    printf("Enter number of column:");
    scanf("%d",&c);
    printf("Enter the  matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<=r;i++){
     
        for(j=0;j<=c;j++)
           {
             if(a[i][j]==1)
             sum=a[i][j]+sum;
           }
             
             
             if (sum>max)
             {
               max=sum;
               index=i;
             }
      
     }
     printf("Index of row with maximum 1s is %d", index);
    
    return 0;
}