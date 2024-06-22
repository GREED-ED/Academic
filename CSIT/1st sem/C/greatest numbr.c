#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    if (a>b && a>c)
    printf("The greater number is %d",a);
    if (b>a && b>c)
    printf("The greater number is %d",b);
    else
    printf("The greater number is %d",c);
    getch ();
}
