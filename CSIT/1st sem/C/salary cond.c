//wap to calculate the salary per hour 10$ upto40 hrs and 15$ per hour for more than 40hrs
#include<stdio.h>
#include<conio.h>
int main()
{
	float hr,s,a,c,sal;
	printf("enter hour");
	scanf("%f",&hr);
  if(hr<=40)
	
{
	
	s=10*hr;
	printf("%f\n",s);}

else if(hr>40)
{

	c=hr-40;
	a=15*c+40*10;
printf("%f\n",a);
}

	getch();
	
}
