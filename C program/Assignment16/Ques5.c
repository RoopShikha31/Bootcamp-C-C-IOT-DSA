//Write a program in C to find the sum of left diagonals of a matrix.

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
    
    
    printf("Sum of left diagonal matrix is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
           {
             if(i+j==r-1){
                 sum=sum+a[i][j];
             }
           }
           
    }
           
             printf("%d ", sum); 
             
        
        return 0;
}