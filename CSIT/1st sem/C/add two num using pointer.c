#include<stdio.h>
#include<conio.h>
int main()
{
	int *a,*b,p,q,sum;
	printf("enter the two number");
	scanf("%d%d",&p,&q);
	a=&p;
	b=&q;
	sum=(*a+*b);
	printf("the sum is %d",sum);
	getch();
}
