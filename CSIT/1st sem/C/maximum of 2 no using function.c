#include<stdio.h>
#include<conio.h>
int max()
{
	int a,b;
	printf("Enter one number:");
	scanf("%d",&a);
	printf("Enter one number:");
	scanf("%d",&b);
	if(a>b)
	return a;
}
int main()
{
	int m;
	m=max();
	printf("Maximum is:%d",m);
	getch();
}
