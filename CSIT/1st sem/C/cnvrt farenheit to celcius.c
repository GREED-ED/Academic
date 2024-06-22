#include<stdio.h>
#include<conio.h>
int main()
{
    float C,F;
    printf("Enter the fahrenheight value:");
    scanf("%f",&F);
    F=5*(F-32)/9;
    printf("The converted value in celcius is %f",F);
    getch();
}
