//Write a function to reverse a string.
#include <stdio.h>

int main()
{
    char s[100],ch;
    int i,l;
    printf("Enter a string:\n");
    scanf("%s",&s);
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
    {
        ch=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=ch;
    }
    printf("Reverse of given string is %s",s);
    return 0;
}
