#include <stdio.h>

int main()
{
   char x;
    printf("check whether a given alphabet is in uppercase or lowercase:\n");
    printf("Enter a albhabet:\n");
    scanf("%c",&x);
    if(x>=97 && x<=122)
       printf("Albhabet is in lowercase");
       
    else if(x>=65 && x<=90)
       printf("Alphabet is in uppercase");
     else
       printf("Digit or special character");
     return 0;
}
