//find power of an integer
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c=1;
	printf("enter base");
	scanf("%d",&a);
	printf("enter power");
	scanf("%d",&b);
	while(b!=0)
	{
	c=c*a;
	b--;
	}
	printf("%d",c);
getch();
}
