#include <stdio.h>

int main()
{
   char x;
    printf("check whether a given alphabet is in uppercase or lowercase:\n");
    printf("Enter a albhabet:\n");
    scanf("%c",&x);
    if(x>=97 && x<=122)
       printf("Albhabet is in lowercase");
       
    else
       printf("Alphabet is in uppercase");
     
     return 0;
}
