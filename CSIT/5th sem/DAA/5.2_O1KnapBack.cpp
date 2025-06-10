#include <iostream>
using namespace std;

const int MAX = 100;
int n, W;
int weight[MAX], value[MAX];
int maxProfit = 0;

void knapsack(int index, int currWeight, int currValue) {
    if (currWeight > W)
        return;

    if (index == n) {
        if (currValue > maxProfit)
            maxProfit = currValue;
        return;
    }

    knapsack(index + 1, currWeight + weight[index], currValue + value[index]);
    knapsack(index + 1, currWeight, currValue);
}

int main() {
    cout << "Enter number of items: ";
    cin >> n;

    cout << "Enter weights:\n";
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++)
        cin >> value[i];

    cout << "Enter knapsack capacity: ";
    cin >> W;

    knapsack(0, 0, 0);

    cout << "\nMaximum value that can be obtained = " << maxProfit << endl;

    return 0;
}

