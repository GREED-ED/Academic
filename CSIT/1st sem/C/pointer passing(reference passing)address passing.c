#include<stdio.h>
#include<conio.h>
void myfunction1(int N)
{
	N=40;
}
void myfunction2(int *N)
{
	*N=40;return;
}
int main()
{
	int test=80;
	myfunction1(test);  //call by value
	printf("The value obtained after pass by value is %d\n",test);
	myfunction2(&test);  //call by reference,call by address
	printf("The value obtained after reference passing is %d",test);
	getch(); 
}
