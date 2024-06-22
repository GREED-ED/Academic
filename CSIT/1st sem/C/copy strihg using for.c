#include<stdio.h>
#include<conio.h>
int main()
{	
	int i;
	char a[20];
	char b[20];
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		a[i]=b[i];	
	}
	printf("%s",a);
	getch();
}
