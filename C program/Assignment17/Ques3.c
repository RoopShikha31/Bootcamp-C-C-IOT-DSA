//Write a program to count vowels in a given string
#include <stdio.h>

int main()
{
   char a[] = "RoopShikha";
   char b='o';
   int i=0,count=0;
   while(a[i] !='\0')
   {
      i++;
      if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
      count++;
   }
   printf(" %d",count);
    return 0;
}
