//Write a program in C to print or display an upper triangular matrix
#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],r,c,i,j,sum;
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
    
    
    printf(" display the upper triangular of a given matrix is\n");
    for(i=0;i<r;i++){
     
        for(j=0;j<c;j++)
           {
             if(i>j)
                 printf(" %d",0); 
             
             else
             
                 printf(" %d",a[i][j]); 
             }
             printf("\n");
           }
return 0;
}