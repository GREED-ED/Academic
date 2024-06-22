#include<stdio.h>
#include<conio.h>
int main()
{
    float r,pmt;
    float pi=3.14;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    pmt=pi*r*r;
    printf("The perimeter of the circel is %f",pmt);
getch();
}
