//to find palindrome number
#include<conio.h>
#include<stdio.h>
int main()
{
	int b,a,rem,sum=0;
	printf("enter number");
	scanf("%d",&a);
	b=a;
	while(b>0)
	{
	rem=b%10;
	
sum=sum*10+rem;
b/=10;

}
printf("\n%d",sum);
if(a==sum)
{
printf("\npalindrome");}
else
{

printf("not palindrome");
}
getch();
}
