//Write a function to transform string into uppercase
#include <stdio.h>

int main()
{
    char s[100];
    int i;
    printf("Enter a  string:\n");
    gets(s);
    for(i=0;s[i]!=0;i++)
    {
        if('a'<=s[i] && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
     printf("Given string in uppercase %s",s);
    return 0;
}
