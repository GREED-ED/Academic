#include <iostream>
using namespace std;

void InsertionSort(int A[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = A[i]; 
        j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
        cout << "\nPass " << i << ":\n";
        for (int k = 0; k < n; k++) {
            cout << A[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(A) / sizeof(A[0]); 
    
    InsertionSort(A, n);

    cout << "\n\nFinal Sorted Array: \n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}

