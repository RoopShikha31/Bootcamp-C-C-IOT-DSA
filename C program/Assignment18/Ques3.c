//Write a function to compare two strings.
#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    int i,flag=0;
    printf("Enter a first string:\n");
    scanf("%s",&s1);
    printf("Enter a first string:\n");
    scanf("%s",&s2);
    for(i=0;s1[i]!='\0' || s2[i]!='\0';i++ )
    {
        if(s1[i]!=s2[i])
        {
        flag=1;
        break;
        }
        
    }
    if(flag==1)
    {
    
    printf("Strings are not same\n");
    }
    else
    {
    printf("Strings are same\n");
    }

    return 0;
}
