/*program to reverse a given number*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,rem,sum=0;
	printf("Enter number:");
	scanf("%d",&a);
	while(a>0)
	{
		rem=a%10;
		sum=sum*10+rem;
		a/=10;
	}
	printf("%d",sum);
	getch();
}
