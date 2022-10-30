
#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    printf("display whether the candidate passed the examination or failed:\n");
    printf("Enter a subjects marks:\n");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    if(s1>=33 && s1<=100)
       printf("Pass");
        else if(s2>=33 && s2<=100)
       printf("Pass");
        else if(s3>=33 && s3<=100)
       printf("Pass");
       else if(s4>=33 && s4<=100)
       printf("Pass");
       else if(s5>=33 && s5<=100)
       printf("Pass");
    else
       printf("Fail");
     
     return 0;
}
