#include <iostream>
#include <iomanip>
using namespace std;
const int N = 10;
void printMatrix(double A[N][N], int n);
void doolittleLU(double A[N][N], double L[N][N], double U[N][N], int n) {
    double sum;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum = 0.0;
            for (int k = 0; k < i; k++)
                sum += L[i][k] * U[k][j];
            U[i][j] = A[i][j] - sum;
        }

        L[i][i] = 1.0;
        for (int j = i + 1; j < n; j++) {
            sum = 0.0;
            for (int k = 0; k < i; k++)
                sum += L[j][k] * U[k][i];
            L[j][i] = (A[j][i] - sum) / U[i][i];
        }
    }
}

void printMatrix(double A[N][N], int n) {
    cout << fixed << setprecision(6); // Set precision for output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }
}


int main() {
    int n;
    double A[N][N];  // Original matrix A
    double L[N][N] = {{0}};  // Lower triangular matrix L
    double U[N][N] = {{0}};  // Upper triangular matrix U

    // Input size of the matrix
    cout << "Enter size of the matrix (n): ";
    cin >> n;

    // Input matrix elements
    cout << "Enter the matrix elements :\n";
    for (int i = 0; i < n; i++) {
        // cout << "Enter elements for row " << i + 1 << " : ";
        for (int j = 0; j < n; j++)
            cin >> A[i][j];
    }

    doolittleLU(A, L, U, n);

    cout << "\nLower triangular matrix :\n";
    printMatrix(L, n);

    cout << "\nUpper triangular matrix:\n";
    printMatrix(U, n);

    return 0;
}

// void doolittleLU(double A[N][N], double L[N][N], double U[N][N], int n) {
//     double sum;

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             sum = 0.0;
//             for (int k = 0; k < i; k++)
//                 sum += L[i][k] * U[k][j];
//             U[i][j] = A[i][j] - sum;
//         }

//         L[i][i] = 1.0;
//         for (int j = i + 1; j < n; j++) {
//             sum = 0.0;
//             for (int k = 0; k < i; k++)
//                 sum += L[j][k] * U[k][i];
//             L[j][i] = (A[j][i] - sum) / U[i][i];
//         }
//     }
// }

// void printMatrix(double A[N][N], int n) {
//     cout << fixed << setprecision(6); // Set precision for output
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++)
//             cout << A[i][j] << "\t";
//         cout << endl;
//     }
// }

