//find the factorial of the given number 
#include<stdio.h>
#include<conio.h>
int main()
{
	int pro=1,i,n;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	
	{
	pro=pro*i;
	printf("\n%d",pro);
}
getch();
}
