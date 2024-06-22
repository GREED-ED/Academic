#include <iostream>
#include <cmath>
#define MAX 10

using namespace std;

int main() {
    int n, i, j, k;
    float pivot, term, sum, a[MAX][MAX], b[MAX], x[MAX];

    cout << "Enter Dimension: ";
    cin >> n;

    cout << "Enter coefficients:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter RHS:" << endl;
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }

    // Forward Elimination
    for (k = 0; k < n - 1; k++) {
        pivot = a[k][k];
        if (fabs(pivot) < 0.000001) {
            cout << "Method failed: pivot too small." << endl;
            return -1;
        } else {
            for (i = k + 1; i < n; i++) {
                term = a[i][k] / pivot;
                for (j = k; j < n; j++) {
                    a[i][j] -= a[k][j] * term;
                }
                b[i] -= b[k] * term;
            }
        }
    }

    // Back Substitution
    x[n - 1] = b[n - 1] / a[n - 1][n - 1];
    for (i = n - 2; i >= 0; i--) {
        sum = 0;
        for (j = i + 1; j < n; j++) {
            sum += a[i][j] * x[j];
        }
        x[i] = (b[i] - sum) / a[i][i];
    }

    // Display Solution Vector
    cout << "Solution using Gauss Elemination:" << endl;
    for (i = 0; i < n; i++) {
        cout << "x[" << i << "] = " << x[i] << endl;
    }

    return 0;
}

