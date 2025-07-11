#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    
    i = 0;
    j = 0;
    k = l;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
        cout << "After merge [" << l << " to " << r << "]: ";
        for (int i = l; i <= r; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sorting: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "\nArray after sorting: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

