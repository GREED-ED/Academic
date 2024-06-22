#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	char name[20];
	char address[50];
	int age;
};
int main()
{
	student *s;
	s=(student*)malloc(5*sizeof(s));
 	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter Name:");
		scanf("%s",(s+i)->name);
		printf("Enter Address:");
		scanf("%s",(s+i)->address);
		printf("Enter Age:");
		scanf("%d",&(s+i)->age);
		printf("\n\n");
	}
	for(i=0;i<5;i++)
	{
		printf("Name:%s\n",(s+i)->name);
		printf("Address:%s\n",(s+i)->address);
		printf("Age:%d\n",(s+i)->age);
	}
	getch();
}
