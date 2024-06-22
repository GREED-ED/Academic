#include<stdio.h>
#include<conio.h>
/*program to count the digit
date:december 15
pass
*/
int main()
{
	int n,i=0;
	printf("enter the numbers");
	scanf("%d",&n);
  while(n!=0)
  {
  	n=n/10;
  	i++;
  }
  printf("There is %d number",i);
  getch();
  
}
