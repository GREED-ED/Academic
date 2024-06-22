/*Program to print rectangle of * using for loop*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char i,j;
	for(i=0;i<4;i++)
	{
	for(j=0;j<8;j++)
	{
	printf("%c",'*');	
    }
    printf("\n");
    }
	getch();
}
