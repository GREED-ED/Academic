//program to check paaa/fail  condition if percentage <=40 pass else fail
#include<stdio.h>
#include<conio.h>
int main()
{
	float tot,obt,per;
	printf("total and obt marks");
	scanf("%f%f",&tot,&obt);

per=obt/tot*100;
printf("%.2f%%",per);
if (per>=40) 
printf("\npass");
else
printf("\nfail");
getch();

}


