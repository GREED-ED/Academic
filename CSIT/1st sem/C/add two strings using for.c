#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i,j,k,n;
	gets(s1);
	gets(s2);
	for(i=0,k=0;s1[i]!='\0';i++)
	{k++;}
	for(j=0,n=0;s2[i]!='\0';j++)
	{n++;}
	for(j=0,i=k;i<=n+k;i++,j++)
	{s1[i]=s2[j];}
	printf("%s",s1);
	getch();
}
