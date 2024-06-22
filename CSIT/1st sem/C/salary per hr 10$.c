#include<stdio.h>
#include<conio.h>
/*wap to calculate salary per hour 10$ upto 40 hrs and 15$ per hour for
more then 40 hrs..
Author:saunak 
pass
date:2071-17-08*/
int main()
{
	float hours,sal,sum;
	printf("ENTER THE HOURS");
	scanf("%f",&hours);
	
	if(hours<=40){
	
	sal=hours*10;
	printf("YOUR SALARY IS %f",sal);
}

    else if(hours>40){
    
	sal=(40*10)+(hours-40)*15;
	printf("YOUR SALARY IS %f",sal);
}
	getch();
}
