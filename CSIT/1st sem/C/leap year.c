#include<stdio.h>
#include<conio.h>
//pass
int main()

{
	int yrs;
	printf("ENTER THE YEAR");
	scanf("%d",&yrs);
	if(yrs%400==0)
	printf("YES THIS IS LEAP YEAR DUDE",yrs);
	else if(yrs%100==0)
	printf(":( NO YAR IT,S NOT LEAP YEAR");
	else if(yrs%4==0)
	printf("YES YES :) IT,S A LEAP YEAR");
	else
	printf("IT,S NOT A LEAP YEAR BOSS");
	getch();
}
