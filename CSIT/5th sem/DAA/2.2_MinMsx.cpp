#include <iostream>
using namespace std;

struct MinMax {
    int min;
    int max;
};
MinMax findMinMax(int A[], int low, int high) {
    MinMax result, left, right;
    if (low == high) {
        result.min = A[low];
        result.max = A[low];
        return result;
    }
    if (high == low + 1) {
        result.min = (A[low] < A[high]) ? A[low] : A[high];
        result.max = (A[low] > A[high]) ? A[low] : A[high];
        return result;
    }
    int mid = (low + high) / 2;
    left = findMinMax(A, low, mid);
    right = findMinMax(A, mid + 1, high);

    result.min = (left.min < right.min) ? left.min : right.min;
    result.max = (left.max > right.max) ? left.max : right.max;
    return result;
}

int main() {
    int A[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(A) / sizeof(A[0]);
    MinMax result = findMinMax(A, 0, n - 1);
    cout << "Minimum value: " << result.min << endl;
    cout << "Maximum value: " << result.max << endl;
    return 0;
}

