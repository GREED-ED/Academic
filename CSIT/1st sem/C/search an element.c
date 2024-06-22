//WAP to search an element in an array a[10]={1,2,.....,10}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},b,i;
	printf("Enter any number:");
	scanf("%d",&b);
	for(i=0;i<10;++i)
	{
		if(b==a[i])
		{printf("Array found.");
		break;}
	}
		if(i==10)
		printf("Array not found.");
	getch();
}
