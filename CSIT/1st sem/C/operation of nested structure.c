#include<stdio.h>
#include<conio.h>
#include<string.h>
struct name
{
	char f_name[20];
	char m_name[20];
	char l_name[20];
};
struct address
{
	char vdc[20];
	int ward_no;
	char dist[20];
	char zone[20];
	char country[20];	
};
struct student
{
	struct name n;
	struct address ad;
};
int main()
{
	struct student std[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter the First name of student:");
		scanf("%s",std[i].n.f_name);
		printf("Enter the middle name of student:");
		scanf("%s",std[i].n.m_name);
		printf("Enter the last name of student:");
		scanf("%s",std[i].n.l_name);
		printf("Enter the full address of student:\n");
		printf("Enter the VDC:");
		scanf("%s",std[i].ad.vdc);
		printf("Enter the ward no:");
		scanf("%d",&std[i].ad.ward_no);
		printf("Enter the district:");
		scanf("%s",std[i].ad.dist);
		printf("Enter the zone:");
		scanf("%s",std[i].ad.zone);
		printf("\n\n");
	
	}
	for(i=0;i<2;i++)
	{
		puts("\tThe full namedd of student is:\n");printf("\t");
		puts(std[i].n.f_name);printf("\t");
		puts(std[i].n.m_name);printf("\t");
		puts(std[i].n.l_name);printf("\t");
		printf("The addres of the student is:",std[i].ad.vdc,std[i].ad.ward_no,std[i].ad.dist,std[i].ad.zone);
	}
	getch();	
}
