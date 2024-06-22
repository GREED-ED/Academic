#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sumcubes=1;
while (i <= n) 
{
printf("Enter n: \n");
scanf("%i", &n);
++i;
sumcubes += (i*i);
printf ("The sum of the cubes from 1..%d is %d\n", n, 
    sumcubes); 
}
getch();
}
