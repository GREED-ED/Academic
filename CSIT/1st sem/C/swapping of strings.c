#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100],temp[100];
	gets(s1);
	gets(s2);
	printf("Before swapping:\n");
	printf("%s%s\n\n",s1,s2);
	strcpy(temp,s1);
	strcpy(s1,s2);
	strcpy(s2,temp);
	printf("After swapping:\n");
	printf("%s%s",s1,s2);
	getch();
}
