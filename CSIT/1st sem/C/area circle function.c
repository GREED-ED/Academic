#include<stdio.h>
#include<conio.h>
int area()
{
	float pi=3.14;
	float r,a;
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	a=pi*r*r;
	printf("The area of the circle with radius %.4f is %.4f",r,a);
}
int main()
{
	area();
	getch();
}
