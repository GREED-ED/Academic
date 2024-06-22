/*Write a function that is passed an array of n pointers to floats and returns a newly created array that contains those n float values. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n;
	float *a[n],*b[n];
	int i;
	printf("value of n");
	scanf("%d",&n);
	
for(i=0;i<n;i++)
{
	printf("value");
	scanf("%f",&a[i]);
}
for(i=0;i<n;i++)
{
	printf("%f\n",b[i]);
}
getch();

}
