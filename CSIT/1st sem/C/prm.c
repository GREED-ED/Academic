#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter any number=");
	scanf("%d",&n);
	for(i=2;i<n-1;i++)
	{
		if(n%i==0)
		{printf("not prime number");
		break;
		}
	}
	if(i==n)
	{
	printf("prime number");
    }
	getch();
}
