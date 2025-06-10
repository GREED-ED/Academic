#include <iostream>
using namespace std;

const int MAX = 100;
int n, target;
int arr[MAX], subset[MAX]; 

void subsetSum(int index, int currSum, int subsetSize) {
    if (currSum == target) {
        cout << "Subset found: ";
        for (int i = 0; i < subsetSize; i++)
            cout << subset[i] << " ";
        cout << endl;
        return; 
    }

    if (index >= n || currSum > target)
        return;

    subset[subsetSize] = arr[index];
    subsetSum(index + 1, currSum + arr[index], subsetSize + 1);

    subsetSum(index + 1, currSum, subsetSize);
}

int main() {
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> target;

    cout << "\nSubsets that sum to " << target << ":\n";
    subsetSum(0, 0, 0);

    return 0;
}

