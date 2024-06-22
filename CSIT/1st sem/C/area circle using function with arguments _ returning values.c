#include<stdio.h>
#include<conio.h>
void area(float rad)
{
	float a;
		a=3.14*rad*rad;
	printf("%f",a);
	getch();
}
int main()
{	
	float rad;
	scanf("%f",&rad);
		area(rad);
	getch();
}

