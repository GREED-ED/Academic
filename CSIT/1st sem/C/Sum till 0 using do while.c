#include<stdio.h>
#include<conio.h>
int main()
{
	int sum=0,n;
	do
	{
		printf("Enter the number");
		scanf("%d",&n);
		sum+=n;/*sum=sum+num*/
	}
	while(n!=0);
	{
		printf("sum=%d",sum);
	}
	getch();
}
