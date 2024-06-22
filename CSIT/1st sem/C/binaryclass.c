#include<stdio.h>
#include<conio.h>
int main()
{
	int a,rem,c,b=0,i=1;
	printf("Enter decimal number:");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%2;
		a=a/2;
		b=b+rem*i;
		i=i*10;
	}
	printf("\nBinary value:%d",b);
	getch();
}
