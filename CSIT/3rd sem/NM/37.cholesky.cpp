#include <iostream>
#include <cmath>
using namespace std;

const int N = 10;
void print(double A[N][N], int n);
void cholesky(double A[N][N], double L[N][N], int n) {
    double sum;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum = 0.0;
            if (j == i) {
                for (int k = 0; k < j; k++)
                    sum += L[j][k] * L[j][k];
                L[j][j] = sqrt(A[j][j] - sum);
            } else {
                for (int k = 0; k < j; k++)
                    sum += L[i][k] * L[j][k];
                L[i][j] = (A[i][j] - sum) / L[j][j];
            }
        }
    }
}
void print(double A[N][N], int n) {
	cout<<"L Matrix"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << "\t";
        cout << endl;
    }
    cout<<"U Matrix"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout <<A[j][i] << "\t";
        cout << endl;
    }
    
}

int main() {
    int n;
    double A[N][N];  
    double L[N][N] = {{0}};

    cout << "Enter size of the matrix: ";
    cin >> n;

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
//        cout << "Enter elements for row " << i + 1 << " (separate by spaces): ";
        for (int j = 0; j < n; j++)
            cin >> A[i][j];
    }

    cholesky(A, L, n);

    cout << "\nCholesky decomposition:\n";
    print(L, n);

    return 0;
}

// void cholesky(double A[N][N], double L[N][N], int n) {
//     double sum;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             sum = 0.0;
//             if (j == i) {
//                 for (int k = 0; k < j; k++)
//                     sum += L[j][k] * L[j][k];
//                 L[j][j] = sqrt(A[j][j] - sum);
//             } else {
//                 for (int k = 0; k < j; k++)
//                     sum += L[i][k] * L[j][k];
//                 L[i][j] = (A[i][j] - sum) / L[j][j];
//             }
//         }
//     }
// }

// void print(double A[N][N], int n) {
// 	cout<<"L Matrix"<<endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++)
//             cout << A[i][j] << "\t";
//         cout << endl;
//     }
//     cout<<"U Matrix"<<endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++)
//             cout <<A[j][i] << "\t";
//         cout << endl;
//     }
    
// }

