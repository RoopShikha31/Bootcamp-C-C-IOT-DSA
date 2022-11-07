
#include <stdio.h>
int fact(int n){
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
int comb(int n,int r){
    
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int x,y,s;
    printf("Enter a number:\n");
    scanf("%d %d",&x,&y);
    s=comb(x,y);
    printf("comb of given number is %d",s);

    return 0;
}