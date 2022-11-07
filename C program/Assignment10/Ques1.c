
#include <stdio.h>

float area(float r);
int main(){
    float r;
    printf("Enter a radius:\n");
    scanf("%f",&r);
    printf("Area of circle is %f",area(r));
    return 0;
}

float area(float r)
{
   
   
    return (3.14*r*r);;

}
