//no of a is twice the number of b over alphabet [a,b]
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str[10];
    int initial_state = 1, current_state = 1, counta = 0,countb=0;
    printf("Enter string over [a,b]: ");
    scanf("%s", str);
    int len = strlen(str);
    while (current_state <= len)
    {
        if (str[current_state-1] == 'a')
        {
            counta++;
        }
        if (str[current_state-1] == 'b')
        {
            countb++;
        }
        current_state++;
    }
    if (counta == 2*countb)
    {
        printf("String accepted.\n");
    }
    else
    {
        printf("String rejected.\n");
    }
    return 0;
}


