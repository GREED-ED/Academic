#include<stdio.h>
#include<conio.h>
	int a[100],n,k=0,i;
	float avg=0;
	void display_avge()
	{
	printf("how many number do you want to calculate average\n");
	scanf("%d",&n);
	printf("Enter the %d element",n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)

	avg=(avg+a[i]);
	avg=(avg/n);
 	;
	
printf("The average is %f",avg);
}
int main()
{
	display_avge();
	getch();
}

