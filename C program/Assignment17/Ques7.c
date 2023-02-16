 //Write a program in C to count the total number of alphabets, digits and special
 //characters in a string.
#include <stdio.h>
#include<string.h>

int main()
{
   char a[100];
   int alp,digit,splchr,i,str;
   alp=digit=splchr=i=0;
   printf("Enter the string:");
   scanf("%[^\n]",a);
   
   while(a[i] !='\0')
   {
     
      
          if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
          {
          alp++;
          }
       else if
           (a[i]>='0' && a[i]<='9')
           {
           digit++;
       }   
       else {
           splchr++;
       }
       i++;
      
   }
    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splchr);
    return 0;
}
