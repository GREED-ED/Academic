#include <stdio.h>

#define SIZE 100

int main() {
    int x[SIZE];
    int m = 100, a = 5, c = 13;

    x[0] = 11;

    for (int i = 1; i < SIZE; i++) {
        x[i] = (a * x[i - 1] + c) % m;
    }

    printf("Random numbers generated using Linear Congruential Generator (LCG):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%3d\t", x[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    return 0;
}

