//display number from 0 to 10 using loop while + also find sum next ques
#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,sum=0;
	while (a<=10)
{
	
	sum=sum+a;
	
	printf("+%d",a);
	a++;
}
printf("=%d",sum);

getch();
}
