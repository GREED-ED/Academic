#include<stdio.h>
#include<conio.h>
int sum();
int main()
{
	sum();
	getch();
}
int sum()
{
	int a,b,s;
	scanf("%d%d",&a,&b);
	s=a+b;
	printf("%d",s);
}
