#include<stdio.h>
#include<conio.h>
int main()
{
	 int num,i;
     printf("Enter the number to find it is prime or not : ");
     scanf("%d",&num);
     for(i=2;i<num;i++)
	 {
    	if(num%i==0)
		{
      	 printf("\n\n%d is Not a Prime Number\n",num);
       	 break;
      	}
 	}
     	if(i==num)
   		printf("\n\n%d is a PRIME number",num);
	 	getch();
}
