#include <conio.h>   
int main()
{
    char c,password[10];
    int i;
    while( (c=getch())!= '\n');{
        password[i] = c;
        printf("*");
        i++;
    }
    return 1;
}

