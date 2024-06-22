#include<stdio.h>
#include<conio.h>
void prod()
{
	int a,b,p;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	p=a*b;
	printf("The product of a & b is:%d\n",p);
}
void fact()
{
	int i, a, fact = 1;
 
  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &a);
 
  for (i = 1; i <= a; i++)
    fact = fact * i;
 
  printf("Factorial of %d = %d\n", a, fact);
}
void main()
{
	prod();
	fact();
	getch();
}
