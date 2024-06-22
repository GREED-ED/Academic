#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0 && a%5==0)
    printf("The number is positive and divisible by 5.");
    else if(a>0 && a%5!=0)
    printf("The number is positive but not divisible by 5.");
    else
    printf("The number is negative.");
    getch();
}
    
