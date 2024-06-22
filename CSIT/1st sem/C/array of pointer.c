#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxrows 3
int main()
{
int *a[3],*b[3],nrows=3,ncols=3;
int i,j,c;
for(i=0;i<nrows;i++)
{
	a[i]=(int*)malloc(ncols*sizeof(int));
}
for(i=0;i<nrows;i++)
{
	for(j=0;j<ncols;j++)
	{
		scanf("%d",(a[i]+j));	
	}
}
for(i=0;i<nrows;i++)
{
	for(j=0;j<ncols;j++)
	{
		printf("%d\t",*(a[i]+j));
		
	}	printf("\n");
}
for(i=0;i<nrows;i++)
{
	for(j=0;j<ncols;j++)
	{
		scanf("%d",*(b[i]+j));	
	}
}
for(i=0;i<nrows;i++)
{
	for(j=0;j<ncols;j++)
	{
		printf("%d\t",*(a[i]+j));
		
	}	printf("\n");
}
for(i=0;i<nrows;i++)
{
	for(j=0;j<ncols;j++)
	{
		c=*(a[i]+j)+*(b[i]+j);	
	}
}
for(i=0;i<nrows;i++)
{
	for(j=0;j<ncols;j++)
	{
			printf("%d\t",c);
		
	}	printf("\n");
}
getch();
}
