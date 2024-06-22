#include<stdio.h>
#include<conio.h>
/*write a single program to find whether entered value is alphabet/vowel using if else.
Author: saunak shiwakoti 
Date:2014-nov24-monday
pass*/
int main()
{
	char A1;
	printf("Enter the any character");
	scanf("%c",&A1);
	if(A1=='a' || A1=='e' || A1=='i' || A1=='o' || A1=='u') 
	printf("entered character is voweland alphabeet too ",A1);
	else if(A1>='a' && A1<='z')
	printf("entered character is  alphabet",A1);
	else
	printf("entered character is nither alphabet nor vowel");
	getch();
}
