//WAP to find sum of odd n even no in the given interval entered by user using for loop..
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,min,max,sum=0,sum1=0;
	printf("Enter the starting range:");
	scanf("%d",&min);
	printf("Enter the end range:");
	scanf("%d",&max);
	for(i=min;i<=max;i++)
	{	
		if(i%2==0)
		a=i;
		sum=sum+a;
	}
	for(i=min;i<=max;i++)
	{	
		if(i%2!=0)
		b=i;
		sum1=sum+b;
	}
	printf("%d",sum);
	printf("%d",sum1);
	
	getch();
}
