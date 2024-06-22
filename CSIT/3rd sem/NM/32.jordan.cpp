#include <iostream>
#include <cmath>
#define MAX 10

using namespace std;

int main() {
    int n, i, j, k;
    float pivot, term, a[MAX][MAX + 1];

    cout << "Enter Dimension: ";
    cin >> n;

    cout << "Enter coefficients:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n + 1; j++) {
            cin >> a[i][j];
        }
    }

    // Elimination
    for (k = 0; k < n; k++) {
        pivot = a[k][k];
        for (j = 0; j < n + 1; j++) {
            a[k][j] = a[k][j] / pivot; // Normalization
        }
        for (i = 0; i < n; i++) {
            term = a[i][k];
            if (k != i) {
                for (j = 0; j < n + 1; j++) {
                    a[i][j] = a[i][j] - a[k][j] * term;
                }
            }
        }
    }

    // Display Solution Vector
    cout << "Solution using Gauss Jordan:" << endl;
    for (i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << a[i][n] << endl;
    }

    return 0;
}

