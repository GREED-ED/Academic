#include <iostream>
#include <climits>
using namespace std;

void printOptimalParens(int s[100][100], int i, int j, char &name) {
    if (i == j) {
        cout << name++;
        return;
    }
    cout << "(";
    printOptimalParens(s, i, s[i][j], name);
    printOptimalParens(s, s[i][j] + 1, j, name);
    cout << ")";
}

int matrixChainOrder(int dim[], int n) {
    int m[100][100];
    int s[100][100];

    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    for (int l = 2; l < n; l++) {
        for (int i = 1; i < n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int cost = m[i][k] + m[k + 1][j] + dim[i - 1] * dim[k] * dim[j];
                if (cost < m[i][j]) {
                    m[i][j] = cost;
                    s[i][j] = k;
                }
            }
        }
    }

    char name = 'A';
    cout << "\nOptimal Parenthesization: ";
    printOptimalParens(s, 1, n - 1, name);
    cout << endl;

    return m[1][n - 1];
}

int main() {
    int n;
    cout << "Enter number of matrices: ";
    cin >> n;

    int dim[n + 1];
    cout << "Enter the dimensions:\n";
    for (int i = 0; i <= n; i++) {
        cout << "dim[" << i << "]: ";
        cin >> dim[i];
    }

    int minCost = matrixChainOrder(dim, n + 1);
    cout << "Minimum number of scalar multiplications = " << minCost << endl;

    return 0;
}

