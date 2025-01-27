//odd number of 1s over [0,1]
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str[10];
    int initial_state = 1, current_state = 1, count = 0;
    printf("Enter string over [1,0]: ");
    scanf("%s", str);
    int len = strlen(str);
    while (current_state <= len)
    {
        if (str[current_state - 1] == '1')
        {
            count++;
        }
        current_state++;
    }
    if (count % 2 == 1)
    {
        printf("String accepted.\n");
    }
    else
    {
        printf("String rejected.\n");
    }
    return 0;
}


