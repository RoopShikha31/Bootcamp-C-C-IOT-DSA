//Write a program in C to find the transpose of a given matrix

#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],r,c,i,j;
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
    
    
    printf("Transpose of matrix is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
           {
           b[i][j]=a[j][i];
           }
           
    }
        for(i=0;i<r;i++){    
           for(j=0;j<c;j++)    
             printf("%d ", b[i][j]); 
              printf("\n");
        }
        return 0;
}