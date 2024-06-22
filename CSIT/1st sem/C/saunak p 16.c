#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=0,sum=0;
		printf("ENTER THE NUMBER");
		scanf("%d",&n);
	
	do
	{
	
		sum=sum+i;
		printf("%d+",i);
		i++;
	}
	while(i<=n);
	printf("THE SUM IS %d",sum);

}
