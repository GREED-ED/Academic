#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a%400==0 && a%100!=0 || a%4==0)
    printf("%d is leap year.",a);
    else 
    printf("%d is not leap year.",a);
    getch();
}
