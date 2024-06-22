//WAP to display odd n even no in the given interval entered by user using for loop..
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,min,max;
	printf("Enter the starting range:");
	scanf("%d",&min);
	printf("Enter the end range:");
	scanf("%d",&max);
	for(i=min;i<=max;i++)
	{	
		
		if(i%2==0)
		printf("\nEven no:%d",i);
	}
		for(i=min;i<=max;i++)
	{	
		
		if(i%2!=0)
		printf("\n\nOdd no:%d",i);
	}
	getch();
}
