//
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,sum=0;

	do
	{

		printf("enter number");
	scanf("%d",&a);
	sum=sum+a;
}
while(a!=0);
printf("sum is %d",sum);
getch();
}

