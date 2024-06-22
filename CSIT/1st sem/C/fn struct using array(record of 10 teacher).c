#include<iostream.h>
#include<conio.h>
using namespace std;

struct std
{
	char name[30];
	int roll;
	int marks;
}std[10];
int main()
{
	int i;
	cout<<"Enter the records of students:\n";
	for(i=0;i<2;i++)
	{
		cout<<"Enter the name of Student:";
		cin>>std[i].name;
		cout<<"Enter the roll of students:";
		cin>>std[i].roll;
		cout<<"Enter the marks of student:";
		cin>>std[i].marks;endl;
	}
	
	for(i=0;i<2;i++)
	{	
		cout<<"Name:\n"<<std[i].name;
		cout<<"Age:\n"<<std[i].roll;
		cout<<"Gender:\n"<<std[i].marks;endl;
	}
	getch();
}
