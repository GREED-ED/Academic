#include<stdio.h>
#include<conio.h>
/*WAP to check wheather entered number is even or odd
Author:saunak shiwakoti
pass*/
int main()
{
	int n;
	printf("Enter the any number::::");
	scanf("%d",&n);
	if(n%2==0)
	printf("Entered number is even");
	else if(n%2==1)
	printf("Entered number is odd");
	getch();
}

