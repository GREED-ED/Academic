#include <stdio.h>

int main() {
	float l,m;
	printf("Enter Inter arrival time of customers per hours:");
	scanf("%f",&l);
	printf("\nEnter The average time spent by cutomers per hour:");
	scanf("%f",&m); 
    
    float lambda = 60.0 / l; 
    float mu = 60.0 / m;  
    
    float p0 = 1 - (lambda / mu);    
    float L = lambda / (mu - lambda);     
    float W = 60 / (mu - lambda);        
    
    printf("Results:\n");
    printf("a) Probability no wait: %.2f (%.0f%%)\n", p0, p0*100);
    printf("b) Expected customers: %.2f\n", L);
    printf("c) Time in bank: %.2f minutes\n", W);
    
    return 0;
}
