#include<stdio.h>
#include<conio.h>
void sum();
void prod();
void diff();
void main()
{
	sum();
	prod();
	diff();
	getch();
}
void sum()
{
	int a,b,add;
	printf("Enter a & b:\n");
	scanf("%d%d",&a,&b);
	add=a+b;
	printf("The sum is %d\n\n",add);
}
void prod()
{
	int a,b,prod;
	printf("Enter a & b:\n");
	scanf("%d%d",&a,&b);
	prod=a*b;
	printf("The prod is %d\n\n",prod);
}
void diff()
{
	int a,b,diff;
	printf("Enter a & b:\n");
	scanf("%d%d",&a,&b);
	diff=a-b;
	printf("The diff is %d\n\n",diff);
}
