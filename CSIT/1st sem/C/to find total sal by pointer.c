#include<stdio.h>
#include<conio.h>
//program to find the total salaray when the current and bonus amount is entered by user
int salary(int*sal,int bonus)
{
	*sal=*sal+bonus;
	return*sal;
}

	int main()
	{
		int sal,bonus;
	sal=0;bonus=0;
	printf("Enter the salary & bonus");
	scanf("%d%d",&sal,&bonus);
	int op=salary(&sal,bonus);
	printf("%d",op);
	getch();
}
