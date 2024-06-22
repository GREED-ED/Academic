#include<stdio.h>
#include<conio.h>
int main()
{
	char a[10];
	char b[10];
	scanf("%s",a);
	scanf("%s",b);
	strcpy(a,b);
	printf("%s",a);
	getch();
}
