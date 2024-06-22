#include<stdio.h>
#include<conio.h>
struct st
{
	int roll_no;
	char name[50];
	int marks;
}s1;
int main()
{
	printf("Enter Record:");
	scanf("%d%s%d",&s1.roll_no,s1.name,&s1.marks);
	printf("%d\t%s\t%d",s1.roll_no,s1.name,s1.marks);
	getch();
}
