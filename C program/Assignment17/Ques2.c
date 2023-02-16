//Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>

int main()
{
   char a[] = "RoopShikha";
   char b='o';
   int i=0,count=0;
   while(a[i] !='\0')
   {
      i++;
      if(a[i]==b)
      count++;
   }
   printf(" %d",count);
    return 0;
}
