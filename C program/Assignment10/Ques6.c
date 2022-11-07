
#include <stdio.h>
int fact(int n);

int main()
{
    int x,s;
    printf("Enter a number:\n");
    scanf("%d",&x);
    s=fact(x);
    printf("Fact of given number is %d",s);

    return 0;
}
int fact(int n){
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
