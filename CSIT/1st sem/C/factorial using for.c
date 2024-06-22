/*program to print factorial of given number*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,prod=1;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		prod=prod*i;
		printf("\n%d",prod);
	}
	getch();
}
