#include <stdio.h>
#include <stdbool.h>

int main() {
    float arrival_rate = 1.0;   
    float service_time = 20.0;  
    float walk_time = 1.5;     
    float time_before_game = 2.0; 
    
    float service_rate = 60.0 / service_time; 

    if (arrival_rate >= service_rate) {
        printf("System is unstable! Arrival rate must be less than service rate.\n");
        return 1;
    }

    float utilization = arrival_rate / service_rate;
    float avg_customers_in_system = arrival_rate / (service_rate - arrival_rate);
    float avg_time_in_system = avg_customers_in_system / arrival_rate;

    float total_time = avg_time_in_system + walk_time; 

    bool on_time = (total_time <= time_before_game);

    printf("Ticket Counter Queue Analysis:\n");
    printf("-----------------------------\n");
    printf("Arrival rate: %.1f customers/minute\n", arrival_rate);
    printf("Service time: %.0f seconds (%.2f minutes)\n", service_time, service_time/60.0);
    printf("Walk time to seat: %.1f minutes\n", walk_time);
    printf("\nQueue Statistics (M/M/1):\n");
    printf("Server utilization: %.1f%%\n", utilization * 100);
    printf("Average customers in system (L): %.2f\n", avg_customers_in_system);
    printf("Average time in system (W): %.2f minutes\n", avg_time_in_system);
    printf("\nTotal expected time:\n");
    printf("System Time + Walk = %.2f + %.1f = %.2f minutes\n", avg_time_in_system, walk_time, total_time);
    printf("\nIf arriving %.1f minutes before kickoff:\n", time_before_game);
    printf("Will be seated before game starts? %s\n", on_time ? "YES" : "NO");

    return 0;
}

