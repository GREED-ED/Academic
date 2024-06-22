#include<stdio.h>
#include<conio.h>
int display(float c[])
{	
	int i;
	float d=0,b;
	for(i=0;i<5;i++)
	{
		scanf("%f",&c[i]);
	}
	for(i=0;i<5;i++)
	{
		d=d+c[i];
	}
	b=d/5.0;
	return b;
}
int main()
{	
	float res;float c[5];
	res=display(c);
	printf("%f",res);
	getch();
}
