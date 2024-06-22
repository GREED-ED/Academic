#include<stdio.h>
#include<conio.h>
#include<string.h>

struct date 
{
	int month;
	int day;
	int year;
};
struct account
{
	char name[20];
	char street[80];
	struct date lastpayment;
}cst[5];
int main()
{
	int i;	
	for(i=0;i<2;i++)
	{
		scanf("%s%s%d%d%d",cst[i].name,cst[i].street,&cst[i].lastpayment.month,&cst[i].lastpayment.day,&cst[i].lastpayment.year);
	}
		for(i=0;i<2;i++)
		{
			printf("%s%s%d%d%d",cst[i].name,cst[i].street,cst[i].lastpayment.month,cst[i].lastpayment.day,cst[i].lastpayment.year);
		}
	getch();
}
