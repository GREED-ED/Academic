/*12 wap in c using in array to perform following operation 
 input 10 intrgers and store them in an array
 calculate average of those elements
print the values after deducting it from an array*/
#include<stdio.h>
#include<conio.h>
int main()
{
float avg,c,b=0;
int i,a[10];
	for(i=0;i<10;i++)
	{
		printf("enter number");

		scanf("%d",&a[i]);
	b=b+a[i];

	avg=b/10;
	
}
printf("average is%f",avg);

for(i=0;i<10;i++)
{
c=avg-a[i];
printf("%.2f",c);
}
	getch();
}

