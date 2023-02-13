//Write a program in C to accept a matrix and determine whether it is a sparse matrix
#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],r,c,i,j,count=0;
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
     for(i=0;i<r;i++){
     
        for(j=0;j<c;j++)
           {
             if(a[i][j]==0){
             count++;
             }
           }
     }
    if(count >((r*c)/2))
             {
                 printf("Sparse matrix"); 
             }
             
             else
             
                 printf("Not a sparse matrix\n"); 
             
                  printf("\nThere are %d number of zeros", count);
             
    return 0;
}