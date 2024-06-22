#include<stdio.h>
#include<string.h>
main ()
{
    char name[100];
    int i;
    printf("Enter your name: ");
gets(name);
for(i=0;name[i]!='\0';i++)
    {}
   printf("The length of your name is: %d",i);
}
