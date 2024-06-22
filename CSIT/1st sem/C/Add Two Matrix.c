//14 write a program in c to add two martices [hint decleare teo dimensional array A[2][3] and B[2][3] for input and third c[2][3]for sum of a and b
#include<stdio.h>
#include<conio.h>
int main()
{
	int A[2][3],B[2][3],C[2][3],i,j;
	for(i=0;i<2;i++)
	{
			for(j=0;j<3;j++)
{
	
	printf("enter no");
	scanf("%d",&A[i][j]);

}

printf("\n");
}
	for(i=0;i<2;i++)
	{
			for(j=0;j<3;j++)
{
	
	printf("%d\t",A[i][j]);
}

printf("\n");
}

	for(i=0;i<2;i++)
	{
			for(j=0;j<3;j++)
{
	
	printf("enter no");
	scanf("%d",&B[i][j]);
		
}

printf("\n");
}
for(i=0;i<2;i++)
	{
			for(j=0;j<3;j++)
{
	
	printf("%d\t",B[i][j]);
}

printf("\n");
}
printf("\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
	
	C[i][j]=A[i][j]+B[i][j];

printf("%d\t",C[i][j]);
}
printf("\n");
}
getch();
}
