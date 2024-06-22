#include<stdio.h>
#include<conio.h>
//wap to find sum of ten number using do while loop
//pass
int main()
{
	int i=0,sum=0;
	do{
		sum=sum+i;
		printf("%d+",i);
		i++;
	}
	while(i<=10);
	printf("The sum is %d",sum);
}

