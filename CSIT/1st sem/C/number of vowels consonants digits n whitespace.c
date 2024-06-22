#include<stdio.h>
#include<conio.h>
int main()
{
	char a[20];
	int i,v,c,d,w;
	v=c=d=w=0;	
	printf("Enter a string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
		++v;
		else if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
		++c;
		else if(a[i]>='0' && a[i]<='9')
		++d;
		else if(a[i]==' ')
		++w;		
	}
	printf("\n\n");
	printf("The word:%s\n\n",a);
		printf("The number of vowels are:%d\n",v);
		printf("The number of consonants are:%d\n",c);
		printf("The number of digits are:%d\n",d);
		printf("The number of white spaces are:%d\n",w);
	getch();
}
