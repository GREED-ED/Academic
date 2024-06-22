//wap to store description of books using function and strcpy and display..


#include<stdio.h>
#include<conio.h>
#include<string.h>


struct book
{
	char title[30];
	char author[30];
    char book_id[20];
	char subject[30];
}b;

void book()
{
	strcpy(b.title,"FCP");
	strcpy(b.author,"chiranjivi");
	strcpy(b.book_id,"1C3");
	strcpy(b.subject,"c-programming");
	printf("the title is %s\n",b.title);
	printf("the author is %s\n",b.author);
	printf("the book id %s\n",b.book_id);
	printf("the subject is %s",b.subject);

}
int main()
{
	book();
	getch();
}
