//to find the sum of a odd numbers and ever number and even numbers in the given interval using for loop
#include<stdio.h>
#include<conio.h>
int main()
{
	int c,a,i,sum=0,sum1=0;
	for(i=0;i<10;i++)
	{
	a=i%2;
	if(a==0)
	{
	sum=sum+i;
}
else
sum1=sum1+i;




}
printf("ans even %d",sum);
printf("ans odd %d",sum1);
getch();
}
