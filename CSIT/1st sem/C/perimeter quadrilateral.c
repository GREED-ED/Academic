#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d,pmt;
    printf("Enter the first side of the quadrilateral:");
    scanf("%f",&a);
    printf("Enter the second side of the quadrilateral:");
    scanf("%f",&b);
    printf("Enter the third side of the quadrilateral:");
    scanf("%f",&c);
    printf("Enter the fourth side of the quadrilateral:");
    scanf("%f",&d);
    pmt=a+b+c+d;
    printf("The perimeter of quadrilateral is %f",pmt);
    getch();
}
