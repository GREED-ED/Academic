/*WAP using array to input 10 integers,store them,calculate avg and substract the avg from input*/
#include<stdio.h>
#include<conio.h>
int main()
{
	float a[10],sum=0,b,c;
	int i;
	for(i=0;i<10;i++)
	{
	printf("\nEnter 10 numbers:");
	scanf("%f",&a[i]);
	sum=sum+a[i];
	}
	b=sum/10;
	printf("\nSum=%.2f",sum);	
	printf("\nAverage=%.2f",b);
	for(i=0;i<10;i++)
	{
	c=a[i]-b;
	printf("\nDeducted value=%.2f",c);
	}
	getch();
}
