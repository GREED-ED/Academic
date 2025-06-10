#include <iostream>
using namespace std;

const int MAX = 20;
int board[MAX][MAX];
int n;

bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++)
        if (board[i][col])
            return false;

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j])
            return false;

    return true;
}

void printBoard() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (board[i][j] ? "Q " : ". ");
        }
        cout << endl;
    }
    cout << endl;
}

bool solveNQueen(int row) {
    if (row == n) {
        printBoard(); 
        return false;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col)) {
            board[row][col] = 1; 
            if (solveNQueen(row + 1)) return true;
            board[row][col] = 0; 
        }
    }

    return false; 
}

int main() {
    cout << "Enter the value of N: ";
    cin >> n;

    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            board[i][j] = 0;

    if (!solveNQueen(0))
        cout << "No other solution exists!" << endl;

    return 0;
}

