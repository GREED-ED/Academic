#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "\t\t****** FCFS DISK SCHEDULING ALGORITHM ******\n\n";
    int n, i, head, totalSeekTime = 0;
    int *requests;

    cout << "Enter the number of disk requests: ";
    cin >> n;

    requests = new int[n];

    cout << "\nEnter the disk requests:\n";
    for (i = 0; i < n; i++) {
        cin >> requests[i];
    }

    cout << "\nEnter the initial position of the disk head: ";
    cin >> head;

    cout << "\nSeek Sequence: " << head;
    for (i = 0; i < n; i++) {
        totalSeekTime += abs(requests[i] - head);
        head = requests[i];
        cout << " -> " << head;
    }
    cout << "\nTotal seek time: " << totalSeekTime << endl;

    delete[] requests;

    cout << "\nCompiled By: Prashan Shrestha." << endl;
    return 0;
}
