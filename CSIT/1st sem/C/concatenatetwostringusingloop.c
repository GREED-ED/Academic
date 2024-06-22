#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int i,j,k,n;
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	for(i=0,k=0;str1[i]!='\0';i++)
	{
		k++;
	}
	for(j=0,n=0;str2[j]!='\0';j++)
	{
		n++;
	}
	for(j=0,i=k;i<=n+k;i++,j++)
	{
		str1[i]=str2[j];
	}
	printf("%s",str1);
	getch();
}
