/*wap in c to peform following operation 
input an array called A of size 10
input an array called B of size 10
make third array in c to peform the addition of A&B
''   fourth ''    ''  '' '' ''  '' subtraction of A&B*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],b[10],c[10],d[10],i;
	for(i=0;i<10;i++)
	{
	
	printf("\nenter no");
	scanf("%d",&a[i]);
}
		for(i=0;i<10;i++)
		{
		
	printf("\nenter no b");
	scanf("%d",&b[i]);
}
for(i=0;i<10;i++)	
	{
	c[i]=a[i]+b[i];
	
	printf("\naddition c=%d",c[i]);
}
		for(i=0;i<10;i++)
		{
		
	d[i]=a[i]-b[i];
	printf("\nsubtraction d=%d",d[i]);
}
	getch();
}

