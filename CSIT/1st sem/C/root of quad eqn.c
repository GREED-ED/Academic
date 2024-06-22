#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,root,root2;
    printf("Enter coeff of x:");
    scanf("%f",&a);
    printf("Enter coeff of y:");
    scanf("%f",&b);
    printf("Enter constant term:");
    scanf("%f",&c);
    root=((-b)+sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("The root of eqn is %f",root);
    root2=((-b)-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("\nThe another root of eqn is %f",root2);
    getch();
}
    
    
    
