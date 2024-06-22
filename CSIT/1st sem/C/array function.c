#include<stdio.h>
#include<conio.h>
float average(int a[5])
{
	int i;
	float sum=0.0;
	for(i=0;i<5;i++)
	{
		sum+=a[i];
		
	}
	return(sum/5);
}
int main()
{
	int a[5]={1,2,3,4,5};
	float avg;
	avg=average(a[5]);
	printf("anerage is %f",avg);
	getch();
}
