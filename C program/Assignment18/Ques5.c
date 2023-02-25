//Write a function to transform a string into lowercase
#include <stdio.h>

int main()
{
    char s[100];
    int i;
    printf("Enter a  string:\n");
    gets(s);
    for(i=0;s[i]!=0;i++)
    {
        if('A'<=s[i] && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
     printf("Given string in lowercase %s",s);
    return 0;
}

