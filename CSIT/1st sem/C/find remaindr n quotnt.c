#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,R,Q;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    R=a%b;
    Q=a/b;
    printf("The remainder is %d",R);
    printf("\nThe quotient is %d",Q);
    getch();
}
    
    
