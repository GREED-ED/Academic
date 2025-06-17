#include <stdio.h>
#include <math.h>   

int main() {
    float lambda; 
    printf("Enter arrival rate per hour: ");
    scanf("%f", &lambda);

    printf("\nPoisson Distribution (? = %.2f)\n", lambda);
    printf("----------------------------------\n");
    printf("x\tP(X = x)\n");

    for (int x = 0; x < 16; x++) {
        double fact = 1.0;
        for (int i = 1; i <= x; i++) {
            fact *= i;
        }

        double prob = (pow(lambda, x) * exp(-lambda)) / fact;
        printf("%2d\t%.6f\n", x, prob);
    }

    return 0;
}

