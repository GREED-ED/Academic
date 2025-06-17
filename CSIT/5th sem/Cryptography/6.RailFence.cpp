#include <iostream>
#include <string>
using namespace std;

string encryptRailFence(string text, int rails) {
    if (rails == 1) return text;

    char rail[100][100];
    for (int i = 0; i < rails; i++)
        for (int j = 0; j < text.length(); j++)
            rail[i][j] = '\n';

    bool down = false;
    int row = 0;

    for (int i = 0; i < text.length(); i++) {
        rail[row][i] = text[i];

        if (row == 0 || row == rails - 1)
            down = !down;

        row += down ? 1 : -1;
    }

    string result = "";
    for (int i = 0; i < rails; i++)
        for (int j = 0; j < text.length(); j++)
            if (rail[i][j] != '\n')
                result += rail[i][j];

    return result;
}

string decryptRailFence(string cipher, int rails) {
    if (rails == 1) return cipher;

    char rail[100][100];
    for (int i = 0; i < rails; i++)
        for (int j = 0; j < cipher.length(); j++)
            rail[i][j] = '\n';

    bool down;
    int row = 0;

    for (int i = 0; i < cipher.length(); i++) {
        if (row == 0) down = true;
        if (row == rails - 1) down = false;

        rail[row][i] = '*';
        row += down ? 1 : -1;
    }

    int index = 0;
    for (int i = 0; i < rails; i++) {
        for (int j = 0; j < cipher.length(); j++) {
            if (rail[i][j] == '*' && index < cipher.length()) {
                rail[i][j] = cipher[index++];
            }
        }
    }

    string result = "";
    row = 0;
    for (int i = 0; i < cipher.length(); i++) {
        if (row == 0) down = true;
        if (row == rails - 1) down = false;

        result += rail[row][i];
        row += down ? 1 : -1;
    }

    return result;
}

int main() {
    int choice, rails;
    string text;

label:
    cout << "\nRail Fence Cipher Menu:\n";
    cout << "1. Encrypt\n2. Decrypt\n3. Exit\nEnter choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cin.ignore();
        cout << "Enter plaintext: ";
        getline(cin, text);
        cout << "Enter number of rails: ";
        cin >> rails;
        cout << "Encrypted text: " << encryptRailFence(text, rails) << endl;
        break;

    case 2:
        cin.ignore();
        cout << "Enter ciphertext: ";
        getline(cin, text);
        cout << "Enter number of rails: ";
        cin >> rails;
        cout << "Decrypted text: " << decryptRailFence(text, rails) << endl;
        break;

    case 3:
        return 0;

    default:
        cout << "Invalid choice. Try again.\n";
    }

    goto label;
}

