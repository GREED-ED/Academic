//WAP to check prime number
#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,count,a,b;

printf("Enter min range: ");
    scanf("%d",&a);

    printf("Enter max range: ");
    scanf("%d",&b);

    num = a;
    while(num<=b)
	{    count = 0;
         i=2;
    while(i<=num/2)
		{
    		if(num%i==0)
			{
            	count++;
            	break;
        	}
             	i++;
        }
         if(count==0 && num!= 1)
         printf("%d ",num);
         num++;
    }
    getch();
}
