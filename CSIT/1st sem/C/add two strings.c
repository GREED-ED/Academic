#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	strcat(s1,s2);
	puts(s1);
	getch();
}
