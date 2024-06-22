#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *a[3],*b[3],*c[3];
int i,j;
for(i=0;i<3;i++)
{
	a[i]=(int*)malloc(3*sizeof(int));
}
	printf("Enter the elements for matrix A:\n");
	
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",(a[i]+j));	
	}	printf("\n");
}	printf("Matrix A:\n");

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",*(a[i]+j));
		
	}	printf("\n");
}	printf("\n");

for(i=0;i<3;i++)
{
	b[i]=(int*)malloc(3*sizeof(int));
}
	printf("Enter the elements for matrix A:\n");
	
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",(b[i]+j));	
	}	printf("\n");
}	printf("Matrix B:\n");

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",*(b[i]+j));
		
	}	printf("\n");
}

for(i=0;i<3;i++)
{
	c[i]=(int*)malloc(3*sizeof(int));
}

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		*(c[i]+j)=*(a[i]+j)+*(b[i]+j);	
	}	printf("\n");
}	printf("The Sum of two matrices is:\n");

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
			printf("%d\t",*(c[i]+j));
		
	}	printf("\n");
}
getch();
}
