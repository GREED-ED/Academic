#include<stdio.h>
#include<conio.h>
int main()
{
	int x[10]={1,2,3,4,5,6,7,8,9,0},i;
	for(i=0;i<10;i++)
	{
		printf("%d",*(x+i));
	}
	getch();
}
