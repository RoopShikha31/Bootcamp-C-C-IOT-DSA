  //Find the frequency of character   
#include <stdio.h>
#include<string.h>

int main()
{
    char a[]="RoopShikha";
    int  freq[150] = {0};
    int i=0;
    while(a[i]!='\0'){
        freq[a[i]]++;
        i++;
    }
    for(i=0;i<150;i++){
        if(freq[i]!=0)
        printf("%c=>%d\n",i,freq[i]);
    }
    
    

    return 0;
}
