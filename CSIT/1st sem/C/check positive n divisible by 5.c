/*WAP to find wheather the given number is positive/negative and if positive
then it is divisibal by 5 or not
Auther:saunak shiwakoti
pass*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the any number");
	scanf("%d",&a);
	if(a>=0 && a%5==0)
	printf("entered number is positive and divisibal by five");
	else if(a<0)
	printf("entered number is negative");
	else
	printf("entered number is positive but not divisibal by five");
	getch();
	
}
