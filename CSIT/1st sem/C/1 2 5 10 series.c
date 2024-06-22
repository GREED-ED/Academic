#include<stdio.h>
#include<conio.h>
int main()
{

int i=1,j=1,n; 
printf("Enter the range:");
scanf("%d",&n);
while(i<=n) 
{ 
printf("%d\n",i); 
i=i+j; 
j=j+2; 
} 
getch();
}
