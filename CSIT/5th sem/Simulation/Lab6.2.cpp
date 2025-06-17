#include <stdio.h>

#define SIZE 100

int main() {
    int x[SIZE];
    int m = 1000, a = 15;
    x[0] = 13; 

    for (int i = 1; i < SIZE; i++) {
        x[i] = (a * x[i - 1]) % m; 
    }

    printf("\nGeneration of random numbers using Multiplicative Congruential Method:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d\t", x[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    return 0;
}

