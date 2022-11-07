#include<stdio.h>
 float simple_interest(float p,float r,float t);
int main()
{
    
    float s, x,y,z;
   
    printf("Enter a value of x,y,z:\n");
    scanf("%f %f %f",&x,&y,&z);
    s=simple_interest(x,y,z);
    printf("Simple interest is %f",s);
    return 0;
    
}

    float simple_interest(float p,float r,float t)
    {
        
    
       return(p*r*t)/100;
    }