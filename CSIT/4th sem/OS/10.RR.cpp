#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "\t\t********** ROUND ROBIN SCHEDULING ALGORITHM ***********n\n";

    int n, quantum;
    cout << "Enter number of processes: ";
    cin >> n;

    int bt[20], rem_bt[20], wt[20], tat[20], p[20];
    float totalWT = 0, totalTAT = 0;

    cout << "Enter Burst Time for each process:\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << " Burst Time: ";
        cin >> bt[i];
        rem_bt[i] = bt[i];
        p[i] = i + 1;  
    }

    cout << "Enter Time Quantum: ";
    cin >> quantum;

    int t = 0; 
    bool done;

    int gantt[100], gantt_time[100], g_idx = 0;
    gantt_time[g_idx] = 0; 

    do {
        done = true;
        for (int i = 0; i < n; i++) {
            if (rem_bt[i] > 0) {
                done = false; 
                gantt[g_idx++] = p[i]; 

                if (rem_bt[i] > quantum) {
                    t += quantum;
                    rem_bt[i] -= quantum;
                } else {
                    t += rem_bt[i];
                    rem_bt[i] = 0;
                    tat[i] = t; 
                }

                gantt_time[g_idx] = t; 
            }
        }
    } while (!done);

    for (int i = 0; i < n; i++) {
        wt[i] = tat[i] - bt[i]; 
        totalWT += wt[i];
        totalTAT += tat[i];
    }

    float avgWT = totalWT / n;
    float avgTAT = totalTAT / n;

    cout << "\nGantt Chart:\n\n";
    cout << "+";
    for (int i = 0; i < g_idx; i++) {
        cout << "-----+";
    }
    cout << "\n|";
    for (int i = 0; i < g_idx; i++) {
        cout << " P" << gantt[i] << "  |";
    }
    cout << "\n+";
    for (int i = 0; i < g_idx; i++) {
        cout << "-----+";
    }
    cout << "\n" << gantt_time[0]; 
    for (int i = 1; i <= g_idx; i++) {
        cout << setw(6) << gantt_time[i];
    }
    cout << endl;

    cout << "\nProcess No.\tBurst Time\tTurnaround Time\tWaiting Time" << endl;
    cout << "-------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "P" << p[i] << "\t\t" << bt[i] << "\t\t" << tat[i] << "\t\t" << wt[i] << endl;
    }
    cout << "-------------------------------------------------" << endl;
    cout << "\nAverage Waiting Time: " << fixed << setprecision(2) << avgWT << endl;
    cout << "Average Turnaround Time: " << fixed << setprecision(2) << avgTAT << endl;

    cout << "\nCompiled By: Prashan Shrestha." << endl;
    return 0;
}
