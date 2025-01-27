#include <iostream>
#include <iomanip>
using namespace std;
#define MAX 100
void printTable(int processSize[], int allocation[], int n) 
{
    cout << "\nProcess No.\tProcess Size\tPartition No." << endl;
    cout << "-------------------------------------------------" << endl;
    for (int i = 0; i < n; ++i) {
        cout << setw(2) << (i + 1)
             << setw(22) << processSize[i];
        if (allocation[i] != -1)
            cout << setw(12) << (allocation[i] + 1) << endl;
        else
            cout << " - " << endl;
    }
}
void worstFit(int partitionSize[], int m, int processSize[], int n) 
{
    int allocation[n];
    for (int i = 0; i < n; ++i) 
    {
        allocation[i] = -1;  
    }
    for (int i = 0; i < n; ++i) 
    {
        int worstIdx = -1;
        for (int j = 0; j < m; ++j) 
        {
            if (partitionSize[j] >= processSize[i]) 
            {
                if (worstIdx == -1 || partitionSize[worstIdx] < partitionSize[j])
                    worstIdx = j;
            }
        }
        if (worstIdx != -1)
        {
            allocation[i] = worstIdx;
            partitionSize[worstIdx] -= processSize[i];
        }
    }
    printTable(processSize, allocation, n);
}
int main() 
{
    cout << "\t\t********** Worst Fit Algorithm *************" << endl << endl;
    int partitionSize[MAX], processSize[MAX];
    int m, n;
    cout << "Enter the number of partitions: ";
    cin >> m;
    cout << "\nEnter the size of each partition:\n";
    for (int i = 0; i < m; ++i) 
    {
        cout << "Partition " << (i + 1) << ": ";
        cin >> partitionSize[i];
    }
    cout << "\nEnter the number of processes: ";
    cin >> n;
    cout << "\nEnter the size of each process:\n";
    for (int i = 0; i < n; ++i) 
    {
        cout << "Process " << (i + 1) << ": ";
        cin >> processSize[i];
    }
    worstFit(partitionSize, m, processSize, n);
    cout << endl<<"Compiled By: Prashan Shrestha." << endl;
    return 0;
}

