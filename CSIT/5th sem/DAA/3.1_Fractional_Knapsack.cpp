#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Item {
    int value, weight;
    double ratio;
};

bool cmp(Item a, Item b) {
    return a.ratio > b.ratio;
}

double fractionalKnapsack(int W, Item arr[], int n) {
    sort(arr, arr + n, cmp);
    double totalValue = 0.0;
    cout << "\n\nItems selected:\n";
    cout << left << setw(10) << "Item" << setw(10) << "Value" << setw(10) << "Weight" << setw(10) << "Taken" << endl;

    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= W) {
            W -= arr[i].weight;
            totalValue += arr[i].value;
            cout << left << setw(10) << i + 1 << setw(10) << arr[i].value << setw(10) << arr[i].weight << setw(10) << "100%" << endl;
        } else {
            double fraction = (double)W / arr[i].weight;
            totalValue += arr[i].value * fraction;
            cout << left << setw(10) << i + 1 << setw(10) << arr[i].value << setw(10) << arr[i].weight << setw(10) << fixed << setprecision(2) << fraction * 100 << "%" << endl;
            break;
        }
    }
    return totalValue;
}

int main() {
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;
    Item arr[n];

    cout << "Enter the knapsack capacity: ";
    cin >> W;

    cout << "Enter value and weight for each item:\n";
    for (int i = 0; i < n; i++) {
        cout << "Item " << i + 1 << " - Value: ";
        cin >> arr[i].value;
        cout << "Item " << i + 1 << " - Weight: ";
        cin >> arr[i].weight;
        arr[i].ratio = (double)arr[i].value / arr[i].weight;
    }

    cout << "\nItems (Before Sorting):\n";
    cout << left << setw(10) << "Item" << setw(10) << "Value" << setw(10) << "Weight" << setw(10) << "Ratio" << endl;
    for (int i = 0; i < n; i++) {
        cout << left << setw(10) << i + 1 << setw(10) << arr[i].value << setw(10) << arr[i].weight << setw(10) << fixed << setprecision(2) << arr[i].ratio << endl;
    }

    double maxProfit = fractionalKnapsack(W, arr, n);
    cout << "\nMaximum value we can obtain = " << fixed << setprecision(2) << maxProfit << endl;

    return 0;
}

