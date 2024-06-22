#include<stdio.h>
#include<conio.h>
int main()
{
    float x=8.8,y=3.5,z=-5.2,a,b,c,d,e,f;
    a=x/(y+z);
    b=(x/y)+z;
    c=2*y+3*(x-z);
    d=2*x/3*y;
    e=2*x/(3*y);
    f=x/y;
    printf("The value of a is %f",a);
    printf("\nThe value of b is %f",b);
    printf("\nThe value of c is %f",c);
    printf("\nThe value of d is %f",d);
    printf("\nThe value of e is %f",e);
    printf("\nThe value of f is %f",f);
    getch();
}
