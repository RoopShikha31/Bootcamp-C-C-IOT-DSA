//Write a program to convert a given string into lowercase
#include <stdio.h>

int main()
{
   char a[] = "ROOP SHIKHA";
   
   int i=0;
   while(a[i] !='\0')
   {
    
      if(a[i]>='A' && a[i]<='Z')
      {
         a[i]=a[i]+32; 
           
      }
      i++;
      
   }
   printf("%s",a);
    return 0;
}
