//Write a program to calculate the sum of two matrices each of order 3x3.

#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],sum[10][10],r,c,i,j;
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
    
    printf("sum of matrix is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}
