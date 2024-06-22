#include<stdio.h>
#include<conio.h>
int main()
{
	int number,remendr,reverse=0,number1;
	printf("ENTER THE NUMBERS");
	scanf("%d",&number);
	number1=number;
	while(number!=0)
	{
	remendr=number%10;
	reverse=(reverse*10)+remendr;
	number=number/10;
    }
printf("\n");
if (number1==reverse)
{
	printf("palindrome");
	
}
else
{
	printf("not palindrome");
}
getch();
}
