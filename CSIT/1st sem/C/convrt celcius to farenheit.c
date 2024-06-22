#include<stdio.h>
#include<conio.h>
int main()
{
    float C,F;
    printf("Enter the Celsius value:");
    scanf("%f",&C);
    F=1.8*C+32;
    printf("The converted value in farenheight is %f",F);
    getch();
}
