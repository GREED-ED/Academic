#include<stdio.h>
#include<conio.h>
/*program to check fail/pass
AUTHOR:SAUNAK SHIWAKOTI
DATE:2070-08-16TUESDAY
pass
*/
int main()
{
	float math,english ,nepali,science,per,sum;
	printf("ENTER THE MARKS OBTAIN IN MATH");
	scanf("%f",&math);
	printf("ENTER THE MARKS OBTAIN IN ENGLISH");
	scanf("%f",&english);
	printf("ENTER THE MARKS OBTAIN IN NEPALI");
	scanf("%f",&nepali);
	printf("ENTER THE MARKS OBTAIN IN SCIENCE");
	scanf("%f",&science);
	sum=math+english+nepali+science;
	per=(sum/400)*100;
	if(per>=40)
	printf("YES YOU ARE PASSED WITH PERCENTAGE %.5f\%%",per);
	else
	printf("FAIL NOTHIN MORE THAN");
	getch();
}
