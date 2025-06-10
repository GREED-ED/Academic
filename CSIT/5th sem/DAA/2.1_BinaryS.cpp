#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(A) / sizeof(A[0]);
    int key, high, low;
    sort(A, A + n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Enter the number to search: ";
    cin >> key;
    high = n - 1;
    low = 0;
    while (low <= high) {
        int mid = (high + low) / 2;
        if (A[mid] == key) {
            cout << "Search is found at index: " << mid << endl;
            return 0;
        } 
        else if (A[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    cout << "Search is not found!!" << endl;
    return 0;
}
