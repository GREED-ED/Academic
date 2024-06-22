/*WAP to define 4 arrays A,B,C,D and print sum of A&B and difference of A&B defined in C n D respectively*/
#include<stdio.h>
#include<conio.h>
int main()
{
	float a[10],b[10],c[10],d[10];
	int i,j,k;
		for(i=0;i<10;i++)
	{
		printf("Enter 10 numbers:");
		scanf("%f",&a[i]);
	}
		for(i=0;i<10;i++)
	{
		printf("Enter another 10 numbers:");
		scanf("%f",&b[i]);
	}
		for(i=0;i<10;i++)
	{
		c[i]=a[i]+b[i];
		printf("\nSum:%.2f",c[i]);
	}
		for(i=0;i<10;i++)
	{
		d[i]=a[i]-b[i];
		printf("\nDifference:%.2f",d[i]);
	}
	getch();
}
