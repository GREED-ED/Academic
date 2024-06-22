 //to find armstrong number
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int c,a,b,rem=0,pow;
	printf("enter no");
scanf("%d",&a);
	b=a;
	while(a>0)
	{
		c=a%10;
		rem=rem+c*c*c;
		a/=10;
	}
	if(b==rem)
	printf("armstrong");
	else
	printf("no armstrong");
	getch();
}

