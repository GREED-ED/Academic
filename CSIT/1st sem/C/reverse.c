//program to find reverse of agiven no
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,rem,sum=0;
	scanf("%d",&a);
	while(a>0)
	{
	rem=a%10;
	
sum=sum*10+rem;
a/=10;

}
printf("%d",sum);


getch();
}
