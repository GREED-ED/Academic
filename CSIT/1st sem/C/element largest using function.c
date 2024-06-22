//largest element of an array function
#include<stdio.h>
#include<conio.h>
	int element()
	{
	int a[5]={10,50,8,100,20},i,temp;
	temp=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>temp)
		{
			temp=a[i];
		}
		
		
}
return temp;
	}
int main()
{
	int c;
	c=element();
	printf("%d",c);
	getch();
}
	

