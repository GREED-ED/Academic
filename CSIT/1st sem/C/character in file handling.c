#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("1.txt","w");
	char c;
	if(fptr==NULL)
	{
		printf("File doesnot exist.");
	}
	else
	{
		do{
			c=fgetc(fptr);
			putchar(c);			
		}while(c!=EOF);
		fclose(fptr);
	}
	getch();
}
