#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	int *A[3];
	for(i=0;i<3;i++)
	{
		A[i]=(int*)malloc(3*sizeof(int));
	}
	int *B[3];
	for(i=0;i<3;i++)
	{
		B[i]=(int*)malloc(3*sizeof(int));
	}
	int *C[3];
	for(i=0;i<3;i++)
	{
		C[i]=(int*)malloc(3*sizeof(int));
	}
	
	printf("Enter the elements of First matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(A[i]+j));
		}
	}
	printf("Enter the elements of Second matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(B[i]+j));
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			*(C[i]+j)=*(A[i]+j)+*(B[i]+j);
		}
	}
	printf("Sum of matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(C[i]+j));
		}
		printf("\n");
	}
	getch();
}
