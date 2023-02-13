//Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,sum;
    printf("Enter number of row:");
    scanf("%d",&r);
    printf("Enter number of column:");
    scanf("%d",&c);
    printf("Enter the first matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("mul of matrix is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
           {
            sum=0;
            for(k=0;k<c;k++)
            sum=sum+a[i][k]*b[k][j];
            mul[i][j]=sum;
           }
           
    }
        for(i=0;i<r;i++){    
           for(j=0;j<c;j++)    
             printf("%d ",mul[i][j]); 
              printf("\n");
        }
        return 0;
}