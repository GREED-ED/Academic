#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,i,j,rem;
	printf("Enter the min value:");
	scanf("%d",&a);
	printf("Enter the max value:");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{	rem=0;
		for(j=1;j<i;j++)
		{
			c=a%10;
			rem=rem+c*c*c;
			a/=10;
		}
			if(b==rem)
			printf("armstrong");
	}
	getch();
}
	
