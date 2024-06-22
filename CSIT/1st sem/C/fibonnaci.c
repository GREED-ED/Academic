//fibonacci
#include<Stdio.h>
#include<conio.h>
int main()
{
	int a=1,b=0,c,i=0,n;
	printf("enter no");
	scanf("%d",&n);
	while(i<=n)
	{
		c=a+b;
		a=b;
		b=c;
			i++;
		printf("\t%d",a);
	
	}
	getch();
}
