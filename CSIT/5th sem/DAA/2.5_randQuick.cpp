#include <iostream>
#include <cstdlib> 
using namespace std;

int pass = 1, n;

void QuickSort(int arr[], int l, int h);
void swap(int* a, int* b);
int partition(int arr[], int l, int h);
int randomizedPartition(int arr[], int l, int h);

void QuickSort(int arr[], int l, int h) {
    if (l < h) {
        int p = randomizedPartition(arr, l, h);
        
        cout << "\nPass " << pass++ << ": ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        QuickSort(arr, l, p - 1);
        QuickSort(arr, p + 1, h);
    }
}
int randomizedPartition(int arr[], int l, int h) {
    int randomIndex = l + rand() % (h - l + 1); 
    swap(&arr[randomIndex], &arr[h]); 
    return partition(arr, l, h);
}

int partition(int arr[], int l, int h) {
    int pivot = arr[h]; 
    int i = (l - 1);
    
    for (int j = l; j <= h - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62}; 
    n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sorting: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    QuickSort(arr, 0, n - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

