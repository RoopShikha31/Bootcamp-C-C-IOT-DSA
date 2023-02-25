//Write a function to find the repeated character in a given string.
#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[100]; 
    int count,l;  
    printf("Enter a string:\n");
    gets(string);
    printf("Rpeated characters in a given string: \n");  
    l=strlen(string);
    for(int i = 0; i < l; i++) {  
        count = 1;  
        for(int j = i+1; j < l; j++) {  
            if(string[i] == string[j] && string[i] != ' ') {  
                count++;  
                  
                string[j] = '0';  
            }  
        }  
         
        if(count > 1 && string[i] != '0')  
            printf("%c\n", string[i]);  
    }  
   
    return 0;  
}  
    