//program to find roots of quadratic equation using detrminant condition
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,r1,r2,d,real,imag;
	printf("enter values");
	scanf("%f%f%f",&a,&b,&c);
d=pow(b,2)-4*a*c;

if (d>0)
{

r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
printf("root of equation%f",r1);
r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
printf("\nroot of equation%f",r2);
}
else if (d==0)
{
r1=-b/(2*a);
r2=-b/(2*a);	
printf("%f=%f",r1,r2);}
else if(d<0)
{
	real=-b/(2*a);
	imag=sqrt(-d)/(2*a);
	printf("%f+i%f \n%f-i%f",real,imag);

}

getch();
}
