//15 wap in c to search an element in array 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},i,b;
		printf("enter any no");
	scanf("%d",&b);
	for(i=0;i<10;i++)
	{
	if(b==a[i])
	{
	printf("match found");
	break;}
}
	
	if(i==10)
	printf("no match");



getch();
}
