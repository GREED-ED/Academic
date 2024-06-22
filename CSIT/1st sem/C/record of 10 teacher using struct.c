#include<stdio.h>
#include<conio.h>
#include<string.h>
struct teachers
{
	char name[30];
	int age;
	char gender[10];
	char address[50];
	char college[20];
	char subject[20];
	char semester[20];
}tch[10];
int main()
{
	int i;
	printf("Enter the records of teachers:\n");
	for(i=0;i<2;i++)
	{
		printf("Enter the name of teacher:");
		scanf("%s",tch[i].name);
		printf("Enter the age of teacher:");
		scanf("%d",&tch[i].age);
		printf("Enter the gender of teacher:");
		scanf("%s",tch[i].gender);
		printf("Enter the address of teacher:");
		scanf("%s",tch[i].address);
		printf("Enter the college of teacher:");
		scanf("%s",tch[i].college);
		printf("Enter the subject of teacher:");
		scanf("%s",tch[i].subject);
		printf("Enter the teching semester of teacher:");
		scanf("%s",tch[i].semester);
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{	
		printf("Name:%s\n",tch[i].name);
		printf("Age:%d\n",tch[i].age);
		printf("Gender:%s\n",tch[i].gender);
		printf("Address:%s\n",tch[i].address);
		printf("College:%s\n",tch[i].college);
		printf("Subject:%s\n",tch[i].subject);
		printf("Teching semester:%s\n",tch[i].semester);
		printf("\n");
	}
	getch();
}
