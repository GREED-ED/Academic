#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,j,sum;
	printf("Enter the min value:");
	scanf("%d",&a);
	printf("Enter the max value:");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{	
		sum=0;
	    for(j=1;j<i;j++)
		{
			if (i % j == 0) 
	   			{sum = sum + j;}
		}
	    	if(sum==j)
	    		{printf("%d",sum);}
	}
	getch();
}
