#include<stdio.h>
#include<conio.h>
 int area(float rad);

int main()

{
	float rad;
	scanf("%f",&rad);
		area(rad);
}
int area(float rad)
{
	float a;
		a=3.14*rad*rad;
	printf("%f",a);
	getch();
}
