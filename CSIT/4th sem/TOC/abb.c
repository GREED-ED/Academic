//starting with a, ending with bb
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
	if (str[0]=='a')
	{
		while (current_state<len)
		{
			if (current_state==len-1 && str[current_state-1]=='b' && str[current_state]=='b')
			{
				printf("String is accepted");
				return 0;
			}
			current_state++;
		}
		printf("String is rejected.");
	}
	else
		printf("String rejected. ");
	return 0;
}

