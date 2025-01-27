#include <iostream>
#include <cstdlib>
using namespace std;

void sortRequests(int requests[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (requests[i] > requests[j]) {
                temp = requests[i];
                requests[i] = requests[j];
                requests[j] = temp;
            }
        }
    }
}

int main() {
    cout << "\t\t****** SCAN DISK SCHEDULING ALGORITHM ******\n\n";
    
    int n, i, head, totalSeekTime = 0, direction, end;
    int *requests, *seekSequence;

    cout << "Enter the number of disk requests: ";
    cin >> n;
    requests = new int[n];
    seekSequence = new int[n + 2];

    cout << "\nEnter the disk requests:\n";
    for (i = 0; i < n; i++) {
        cin >> requests[i];
    }

    cout << "\nEnter the initial position of the disk head: ";
    cin >> head;
    
    cout << "\nEnter the disk end point: ";
    cin >> end;

    cout << "\nEnter the direction (0 for left, 1 for right): ";
    cin >> direction;

    sortRequests(requests, n);

    int size = 0;
    if (direction == 1) { 
        for (i = 0; i < n; i++) {
            if (requests[i] >= head) {
                seekSequence[size++] = requests[i];
            }
        }
        seekSequence[size++] = end; 
        for (i = n - 1; i >= 0; i--) {
            if (requests[i] < head) {
                seekSequence[size++] = requests[i];
            }
        }
    } else {  // Left direction
        for (i = n - 1; i >= 0; i--) {
            if (requests[i] <= head) {
                seekSequence[size++] = requests[i];
            }
        }
        seekSequence[size++] = 0; 
        for (i = 0; i < n; i++) {
            if (requests[i] > head) {
                seekSequence[size++] = requests[i];
            }
        }
    }

    cout << "\nSeek Sequence: " << head;
    for (i = 0; i < size; i++) {
        totalSeekTime += abs(seekSequence[i] - head);
        head = seekSequence[i];
        cout << " -> " << head;
    }

    cout << "\nTotal seek time: " << totalSeekTime << endl;

    delete[] requests;
    delete[] seekSequence;

    cout << "\nCompiled By: Prashan Shrestha." << endl;
    return 0;
}
