/*WAP to find roots of quadratic equation using determinant condition
Author:saunak shiwakoti
Date:dec 1 monday
Teacher:s.s mam
pass
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2,real,img;
	printf("Eenter the value of b");
	scanf("%f",&b);
	printf("Enter the value of a");
	scanf("%f",&a);
	printf("Enter the value of c");
	scanf("%f",&c);
	d=b*b-4*a*c;
	if(d>0)
    {

	       r1=((-b)+sqrt(b*b-4*a*c))/(2*a);
	       r2=((-b)-sqrt(b*b-4*a*c))/(2*a);
	       printf("The root are %f%f",r1,r2);
	 }
	     else if(d==0)
	 {
	      r1=r2=(-b)/(2*a);
	      printf("The roots are %f%f",r1);
	 }
	else
	{
	     real=(-b)/(2*a);
	     img=sqrt(-d)/(2*a);
	    printf("The roots is %f+%fi",real,img);
	    printf("\n");
	    printf("The roots is %f-%fi",real,img);
    }
	getch();
}
