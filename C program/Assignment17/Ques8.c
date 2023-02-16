
#include <stdio.h>
// Write a program in C to copy one string to another string
#include<string.h>

int main()
{
   char a[100],b[100];
   int i;
   
   printf("Enter the string:");
   scanf("%[^\n]",a);
   for(i=0;i<strlen(a);i++)
   {
      b[i]=a[i];
     }
    printf("%s",b);
   
    return 0;
}
