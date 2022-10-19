#include <stdio.h>
#include <string.h>
 
int main()
{   
    char a[100];
    int length;
 
    printf("Enter the String: ");
    scanf("%s",&a);
    length=strlen(a);
    printf("string length=%d\n",length);
    
 
    return 0;
}