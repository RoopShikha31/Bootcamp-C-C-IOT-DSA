#include <stdio.h>

int main()
{
    int a[] ={1,3,5,8,9};
    int b[] ={7,8,9,10,11};
    int c[10],k=0,i=0,j=0;
   
    for(k=0;k<10;k++)
    {
         if(a[i]<b[j])
             {
                c[k]=a[i];
                i++;
              } else
              {
                c[k]=b[j];
                j++;
              }
         }
         
        for(k=0;k<10;k++)       
        
    
        printf("%d ",c[k]);

    return 0;
}
