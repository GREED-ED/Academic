/*program to print factorial of 5*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,prod=1;
	for(i=5;i>0;i--)
	{
		prod=prod*i;
		printf("\n%d",prod);
	}
	getch();
}
