//WAP to add two matrices a[2][3],b[2][3] and store in c[2][3]
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter numbers:");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter another numbers:");
		scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		printf("The sum of above matrices is:");
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
