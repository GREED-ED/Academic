#include<stdio.h>
#include<string.h>
main ()
{
    char str1[100],str2[100],temp[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("Before swapping\nFirst string is %s",str1);
    printf("\nSecond string is %s",str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("\nAfter swapping\nYour first string becomes: %s",str1);
    printf(" and second string becomes: %s",str2);
}
