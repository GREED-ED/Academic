#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,temp,a[5]={30,100,2,4,3};
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(j=0;j<5;j++)
	{
		printf("\t%d",a[j]);
	}
	getch();
}
