#include<stdio.h>
int main()
{
    int a,b,c,choice;
    while(1){

   
    printf("Enter your choice\n");
    printf("1.Isosceles triangle\n 2.Right angle triangle\n 3.Equilateral Triangle\n");
    scanf("%d",&choice);
      printf("Enter three sides\n");
    scanf("%d %d %d",&a,&b,&c);

    switch(choice)
    {
          case 1:
              if(a==b || b==c || c==a)

              printf("Isoceles Triangle\n");
              else
                printf("Not Isoceles Triangle\n");
              break;

          case 2:
              if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a) )
          {

               printf("Right angle triangle\n");}
              else{
                  printf("Not Right angle triangle\n");
                break;}

          case 3:if((a==b) && (b==c))
              printf("Equilateral Triangle\n");
              else
                 printf("Not Equilateral Triangle\n");
                break;

          
          default:printf("Invalid");

    }

    }
}
