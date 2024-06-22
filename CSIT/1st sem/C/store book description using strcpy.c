//wap to store(title of book,author,book_id and subject of book).use strcpy to store those information and then display it.

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

int main()
{
	strcpy(b.title,"FCP");
	strcpy(b.author,"chiranjivi");
	strcpy(b.book_id,"1C3");
	strcpy(b.subject,"c-programming");
	printf("the title is %s\n",b.title);
	printf("the author is %s\n",b.author);
	printf("the book id %s\n",b.book_id);
	printf("the subject is %s",b.subject);
	getch();
}
