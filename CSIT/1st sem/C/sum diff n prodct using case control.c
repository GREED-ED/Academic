//WAP to perform sum,difference and product of any two numbers using case control statement:
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,choice;
	printf("Enter choice for different calculation:");
	scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("Enter a number:");
			scanf("%d",&a);
			printf("Enter a number:");
			scanf("%d",&b);
			c=a+b;
			printf("\nThe sum of a&b is:%d\n\n",c);break;
		case 2:
			printf("Enter a number:");
			scanf("%d",&a);
			printf("Enter a number:");
			scanf("%d",&b);
			d=a-b;
			printf("\nThe difference of a&b is:%d\n\n",d);break;
		case 3:
			printf("Enter a number:");
			scanf("%d",&a);
			printf("Enter a number:");
			scanf("%d",&b);
			e=a*b;
			printf("\nThe product of a&b is:%d\n\n",e);break;
		default:
			printf("\nNo choice available...enter less than 4");break;
		}
		getch();
}
