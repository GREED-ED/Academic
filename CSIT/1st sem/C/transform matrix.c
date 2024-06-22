//WAP to transpose matrices
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3],i,j;
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
		printf("The transformed matrix is:");
		printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	getch();
}
