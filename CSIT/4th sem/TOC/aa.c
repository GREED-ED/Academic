//having substring "aa"
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
	char str[10];
	int initial_state=1,current_state=1;
	printf("Enter string over [a,b]: ");
	scanf("%s",str);
	int len = strlen(str);
	while (current_state<len)
	{
		if (str[current_state-1]=='a' && str[current_state]=='a')
		{
			printf("String is accepted.");
			return 0;
		}
		current_state++;
	}
	printf("String rejected. ");
	return 0;
}

