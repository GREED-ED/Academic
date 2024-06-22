#include<stdio.h>
#include<conio.h>
int main()
{
    float b,h,area;
    printf("Enter the base of the right angled triangle:");
    scanf("%f",&b);
    printf("Enter the height of the right angled triangle:");
    scanf("%f",&h);
    area=0.5*(b*h);
    printf("The area of right angled triangle is %f",area);
    getch();
}
