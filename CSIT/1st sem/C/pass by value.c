#include<stdio.h>
#include<conio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x,y;
	x=30,y=70;
	swap(x,y);
	printf("The value of x is %d\n",x);
	printf("The value of y is %d",y);
	getch();
}
