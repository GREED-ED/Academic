#include <iostream>
using namespace std;

void swap(int* a, int* b);
void SelectionSort(int A[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;  // Assume the minimum element is at index i
        for (j = i + 1; j < n; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;  // Update minIndex if a smaller element is found
            }
        }
        if (minIndex != i) {
            swap(&A[i], &A[minIndex]);  // Swap the found minimum element with the element at i
        }
        // Display the array after each pass
        cout << "\nPass " << i + 1 << ":\n";
        for (int k = 0; k < n; k++) {
            cout << A[k] << " ";
        }
        cout << endl;
    }
}

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    cout << "\t\t\t------Selection Sort------\n\n";
    
    int A[] = {64, 34, 25, 12, 22, 11, 90}; // Predefined array
    int n = sizeof(A) / sizeof(A[0]);  // Calculate the number of elements
    
    SelectionSort(A, n);
    
    cout << "\n\nFinal Sorted Array: \n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}

