#include<stdio.h>
#include<conio.h>
int sum();
int prod();
int diff();
void main()
{ int result,result1,result2;
	result=sum();
	result1=prod();
	result2=diff();
	printf("The sum is %d",result);
	printf("The product is %d",result1);
	printf("The difference is %d",result2);
	getch();
}
int sum()
{
	int a,b,add;
	printf("Enter a & b:\n");
	scanf("%d%d",&a,&b);
	add=a+b;
	return add;
}
int prod()
{
	int a,b,prod;
	printf("Enter a & b:\n");
	scanf("%d%d",&a,&b);
	prod=a*b;
	return prod;
}
int diff()
{
	int a,b,diff;
	printf("Enter a & b:\n");
	scanf("%d%d",&a,&b);
	diff=a-b;
	return diff;
}
