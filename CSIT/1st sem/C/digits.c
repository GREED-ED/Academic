//program to count the digit
#include<stdio.h>
#include<conio.h>
int main()
{
int a,i=0;
printf("enter digit");
scanf("%d",&a);
while(a!=0)
{
	a/=10;
	++i;
}
printf("digit %d",i);
getch();
}

