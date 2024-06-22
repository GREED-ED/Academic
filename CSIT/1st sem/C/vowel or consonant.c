#include<stdio.h>
#include<conio.h>
int main()
{
	char alp;
	printf("enter alphabet");
	scanf("%c",&alp);
	if (alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u' || alp=='A' ||alp=='E' || alp=='O' || alp=='U') 
	
	printf(" vowel and alphabet");
	else if (alp>='a' && alp<='z' || alp>='A' && alp<='Z' )
	printf("consotant and alphabet");
	else
	printf("other value");
	getch();
}
