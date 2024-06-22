//WAP to check prime number
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=2;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n-1)
	{
		if (n%i==0)
		{printf("Not Prime");
		break;}
		i++;
	}
	if(i==n)
	{printf("Prime");}
	getch();
}
