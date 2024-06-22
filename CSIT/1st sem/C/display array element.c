#include<stdio.h>
#include<conio.h>
void display(int c[])
{	int i;
	for(i=0;i<5;i++)
	{
		printf("%d",c[i]);
	}
}
int main()
{
	int c[5]={1,2,3,4,5};
	display(c);
	getch();
}
