//Sum of two distance using structure
#include<stdio.h>
#include<conio.h>
struct distance
{
	int feet;
	float inch;
}d1,d2,sum;
int main()
{
	printf("Enter the distances:");
	scanf("%d%f",&d1.feet,&d1.inch);
	scanf("%d%f",&d2.feet,&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if(sum.inch>=12)
	{
		sum.feet++;
		sum.inch=sum.inch-12;
	}
	printf("The total distance is:%d'%.3f''",sum.feet,sum.inch);
	getch();
}
