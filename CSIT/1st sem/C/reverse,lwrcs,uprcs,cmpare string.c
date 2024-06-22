#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	int c;
	gets(a);
	printf("The uppercase of the string is:%s\n",strupr(a));
	printf("The lowercase of the string is:%s\n",strlwr(a));
	gets(b);
	c=strcmp(a,b);
	if(c!=0)printf("Strings are not equal\n");
	else
	printf("Strings are equal\n");
	printf("The reverse of the string is:%s\n",strrev(a));
	getch();
}
