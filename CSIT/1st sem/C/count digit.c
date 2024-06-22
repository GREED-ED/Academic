/*Program to count the input digit*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n=0;
	printf("Enter a number:");
	scanf("%d",&a);
	while(a!=0)
	{
		a/=10;
		++n;
	}
	printf("%d",n);
	getch();
}
