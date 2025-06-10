#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Job {
    int id;  
    int deadline; 
    int profit;  
};
bool cmp(Job a, Job b) {
    return a.profit > b.profit;
}
void jobSequencing(Job arr[], int n) {
    sort(arr, arr + n, cmp);

    vector<int> result(n, -1);
    int totalProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = min(n, arr[i].deadline) - 1; j >= 0; j--) {
            if (result[j] == -1) {
                result[j] = i; 
                totalProfit += arr[i].profit;
                cout << "Job " << arr[i].id << " is scheduled at time slot " << j + 1 << endl;
                break;
            }
        }
    }
    cout << "\nTotal Profit: " << totalProfit << endl;
}

int main() {
    int n;
    cout << "Enter the number of jobs: ";
    cin >> n;
    Job arr[n];

    cout << "Enter job details (ID, Deadline, Profit):\n";
    for (int i = 0; i < n; i++) {
        cout << "Job " << i + 1 << ": ";
        cin >> arr[i].id >> arr[i].deadline >> arr[i].profit;
    }
    jobSequencing(arr, n);
    return 0;
}

