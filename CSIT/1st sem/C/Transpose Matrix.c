//16wap to transpose of a given matrices
#include<Stdio.h>
#include<conio.h>
int main()
{
	int a[2][3],i,j;
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
		{
		
		printf("enter no");
		scanf("%d",&a[i][j]);
	}
	
	printf("\n");
}
for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\t%d",a[i][j]);
		}
		printf("\n");
			
	}
	
	for(i=0;i<3;i++)
	{
		printf("\noutput is");
		for(j=0;j<2;j++)
		{
		printf("\t%d",a[j][i]);
		}
		printf("\n");
			
	}
	getch();
}
