#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string process(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        
        if (isalpha(c)) {
            result += toupper(c);
        }
    }
    return result;
}

void createMatrix(string key, char matrix[5][5]) {
    bool used[26] = {false};
    int row = 0, col = 0;

    for (int i = 0; i < key.length(); i++) {
        char c = toupper(key[i]);
        if (!used[c - 'A']) {
            matrix[row][col] = c;
            used[c - 'A'] = true;
            col++;
            if (col == 5) {
                col = 0;
                row++;
            }
        }
    }

    for (char c = 'A'; c <= 'Z'; c++) {
        if (!used[c - 'A'] && c != 'J') { 
            matrix[row][col] = c;
            used[c - 'A'] = true;
            col++;
            if (col == 5) {
                col = 0;
                row++;
            }
        }
    }
}

void displayMatrix(char matrix[5][5]) {
    cout << "\nPlayfair Cipher Matrix: \n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void findPosition(char c, char matrix[5][5], int &row, int &col) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == c) {
                row = i;
                col = j;
                return;
            }
        }
    }
}

void createDigraphs(string &text) {
    for (int i = 0; i < text.length(); i += 2) {
        if (i + 1 == text.length()) {
            text += 'X';  
        }
        if (text[i] == text[i + 1]) {
            text.insert(i + 1, "X"); 
        }
    }
}

string encrypt(string text, string key) {
    char matrix[5][5];
    createMatrix(key, matrix);

    text = process(text);
    createDigraphs(text);
    string result = "";

    for (int i = 0; i < text.length(); i += 2) {
        int row1, col1, row2, col2;
        findPosition(text[i], matrix, row1, col1);
        findPosition(text[i + 1], matrix, row2, col2);

        if (row1 == row2) { 
            result += matrix[row1][(col1 + 1) % 5];
            result += matrix[row2][(col2 + 1) % 5];
        } else if (col1 == col2) { 
            result += matrix[(row1 + 1) % 5][col1];
            result += matrix[(row2 + 1) % 5][col2];
        } else { 
            result += matrix[row1][col2];
            result += matrix[row2][col1];
        }
    }

    return result;
}

int main() {
    int choice;
    string text, key;
    cout << "Enter key: ";
    cin >> key;
    cin.ignore();
    char matrix[5][5];
    createMatrix(key, matrix);
    displayMatrix(matrix);

    cout << "Enter text to encrypt: ";
    getline(cin, text);
    cout << "Encrypted text: " << encrypt(text, key) << endl;
    return 0;
}

