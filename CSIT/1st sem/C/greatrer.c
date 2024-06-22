#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("%d>%d",a,b);
	else if(a<b)
	printf("%d<%d",a,b);
	else
	printf("%d=%d",a,b);
	getch();
}

