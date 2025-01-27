#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "\t\t********* PRIORITY SCHEDULING ALGORITHM **********\n\n";

    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int bt[20], priority[20], wt[20], tat[20], p[20];
    float totalWT = 0, totalTAT = 0;

    cout << "Enter Burst Time and Priority for each process:\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << " Burst Time: ";
        cin >> bt[i];
        cout << "P" << i + 1 << " Priority: ";
        cin >> priority[i];
        p[i] = i + 1; 
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (priority[j] < priority[i]) {
                swap(bt[i], bt[j]);
                swap(priority[i], priority[j]);
                swap(p[i], p[j]);
            }
        }
    }

    wt[0] = 0; 
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }

    for (int i = 0; i < n; i++) {
        totalWT += wt[i];
        totalTAT += tat[i];
    }
    float avgWT = totalWT / n;
    float avgTAT = totalTAT / n;

    cout << "\nProcess No.\tBurst Time\tPriority\tTurnaround Time\tWaiting Time" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "P" << p[i] << "\t\t" << bt[i] << "\t\t" << priority[i] << "\t\t" << tat[i] << "\t\t" << wt[i] << endl;
    }
    cout << "---------------------------------------------------------------------" << endl;
    cout << "\nAverage Waiting Time: " << fixed << setprecision(2) << avgWT << endl;
    cout << "Average Turnaround Time: " << fixed << setprecision(2) << avgTAT << endl;

    cout << "\nGantt Chart:\n\n";
    cout << "+";
    for (int i = 0; i < n; i++) {
        cout << "-----+";
    }
    cout << "\n|";
    for (int i = 0; i < n; i++) {
        cout << " P" << p[i] << "  |";
    }
    cout << "\n+";
    for (int i = 0; i < n; i++) {
        cout << "-----+";
    }
    cout << "\n0";
    int totalTime = 0;
    for (int i = 0; i < n; i++) {
        totalTime += bt[i];
        cout << setw(6) << totalTime;
    }
    cout << endl;

    cout << "\nCompiled By: Prashan Shrestha." << endl;
    return 0;
}
