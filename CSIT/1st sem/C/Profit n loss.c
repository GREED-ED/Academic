#include<stdio.h>
#include<conio.h>
//WAP TO FIND PROFIT AND LOSS
//PASS
int main()
{
	float cp,sp,profit,loss,constant;
	printf("ENTER THE COST PRICE OF OBJECT");
	scanf("%f",&cp);
	printf("ENTER THE SELLING PRICE OF OBJECT");
	scanf("%f",&sp);
	profit=sp-cp;
	loss=cp-sp;
	if(sp>cp)
	printf("YOUR PROFIT AMOUNT IS %f",profit);
	else if(sp<cp)
	printf("YOUR LOSS AMOUNT IS %f",loss);
	else if(sp=cp)
	printf("YOU ARE IN NITHER PROFIT NOR LOSS %f",constant);
	getch();
	
}
