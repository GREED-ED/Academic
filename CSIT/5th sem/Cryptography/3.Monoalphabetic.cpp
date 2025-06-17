#include <iostream>
#include <string>
using namespace std;

string encryptMonoalphabetic(string text, string key) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        if (isupper(ch)) {
            result += toupper(key[ch - 'A']);
        } else if (islower(ch)) {
            result += tolower(key[ch - 'a']);
        } else {
            result += ch;
        }
    }
    return result;
}

string decryptMonoalphabetic(string text, string key) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        if (isupper(ch)) {
            size_t pos = key.find(toupper(ch));
            if (pos != string::npos)
                result += char(pos + 'A');
        } else if (islower(ch)) {
            size_t pos = key.find(tolower(ch));
            if (pos != string::npos)
                result += char(pos + 'a');
        } else {
            result += ch;
        }
    }
    return result;
}

int main() {
    int choice;
    string text, key;

label:
    cout << "\nMonoalphabetic Cipher Menu:\n";
    cout << "1. Encrypt\n";
    cout << "2. Decrypt\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cin.ignore();
            cout << "Enter the 26-letter key (A-Z mapping): ";
            getline(cin, key);

            if (key.length() != 26) {
                cout << "Invalid key length! Must be exactly 26 characters.\n";
                goto label;
            }

            cout << "Enter the plaintext: ";
            getline(cin, text);
            cout << "Encrypted Text: " << encryptMonoalphabetic(text, key) << endl;
            break;

        case 2:
            cin.ignore();
            cout << "Enter the 26-letter key (A-Z mapping): ";
            getline(cin, key);

            if (key.length() != 26) {
                cout << "Invalid key length! Must be exactly 26 characters.\n";
                goto label;
            }

            cout << "Enter the ciphertext: ";
            getline(cin, text);
            cout << "Decrypted Text: " << decryptMonoalphabetic(text, key) << endl;
            break;

        case 3:
            return 0;

        default:
            cout << "Invalid choice! Please enter 1, 2 or 3.\n";
    }

    goto label;
}

