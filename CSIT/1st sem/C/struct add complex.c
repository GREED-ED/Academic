//sum of two complex number passing structure to function 
#include<stdio.h>

 typedef struct complex

{
	float real;
	float image;
}complex;
 complex add(complex n1,complex n2);
int main()
{
	struct complex n1,n2,temp;
	printf("enter 1st real and imaginary number");
	scanf("%f %f",&n1.real,&n1.image);
	printf("enter 2nd real and imaginarynnumber");
	scanf("%f %f",&n2.real,&n2.image);
	temp=add(n1,n2);
	printf("%f+%f",temp.real,temp.image);
	
}
complex add(complex n1,complex n2)
{
	complex temp;
	temp.real=n1.real+n2.real;
	temp.image=n1.image+n2.image;
	return(temp);
} 
