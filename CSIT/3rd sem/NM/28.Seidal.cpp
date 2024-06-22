#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    int n, i, j;
    float sum, error, a[10][10], b[10], new_x[10], old_x[10], E[10];

    cout << "Enter the dimension: ";
    cin >> n;

    cout << "Enter coefficients:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter RHS:\n";
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout << "Enter accuracy limit: ";
    cin >> error;

    for (i = 0; i < n; i++) {
        old_x[i] = 0;
    }

    while (true) {
        bool y = true;

        for (i = 0; i < n; i++) {
            sum = b[i];
            for (j = 0; j < n; j++) {
                if (i != j) {
                    sum -= a[i][j] * old_x[j];
                }
            }
            new_x[i] = sum / a[i][i];
            E[i] = fabs(new_x[i] - old_x[i]) / fabs(new_x[i]);
        }

        for (i = 0; i < n; i++) {
            if (E[i] > error) {
                y = false;
            }
            old_x[i] = new_x[i];
        }

        if (y) {
            break;
        }
    }

    cout << "Solution using Seidal Method:\n";
    for (i = 0; i < n; i++) {
        cout << new_x[i] << "\t";
    }

    return 0;
}

