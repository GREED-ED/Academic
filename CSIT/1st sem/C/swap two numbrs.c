/*WAP to swap two number
Author:saunak shiwakoti
pass*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("THE VALUE IS %d",a);
	printf("\n");
	printf("THE VALUE IS %d",b);
	getch();
}
