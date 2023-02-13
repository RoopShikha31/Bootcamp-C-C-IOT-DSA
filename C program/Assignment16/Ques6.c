//Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],r,c,i,j,sum,sum1;
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
    for(i=0;i<r;i++)
      { 
          sum=sum1=0;
           for(j=0;j<c;j++){
            sum=sum+a[i][j];
             sum1=sum1+a[j][i];
        }
        printf("\nSum of row = %d,Sum of col = %d",sum,sum1);
          
      }
             
  return 0;
}
