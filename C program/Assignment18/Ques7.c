//Write a function to check whether a given string is palindrome or not.
#include <stdio.h>
#include<string.h>

int main()

{
    char str[100];
    
    printf("Enter a string:\n");
    gets(str);
    if(isPallindrome(str))
     printf("Palindrome\n");
    else
     printf("Not a Palindrome \n"); 
}     
    
    
int isPallindrome(char s[])
{
    int l,i;
    l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
        return 0;
    }
    return 1;
}    
