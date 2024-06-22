#include<stdio.h>
#include<conio.h>
/*WAP to relate two integer entered by user using '>' or '=' or '<'
Author:saunak shiwakoti
Date:2014-nov24-monday*/
int main()
{
	int a,b;
	printf("enter the first interer");
	scanf("%d",&a);
    printf("enter the second integer");
    scanf("%d",&b);
	if(a>b)
	printf("%d>%d",a,b);
	else if(a<b)
	printf("%d<%d",a,b);
	else
	printf("%d=%d",a,b);
	getch();
}
