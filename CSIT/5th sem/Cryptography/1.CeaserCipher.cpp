#include <iostream>
using namespace std;

string encrypt(string text, int key) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        if (isupper(ch)) {
            result += char((ch - 'A' + key) % 26 + 'A');
        } else if (islower(ch)) {
            result += char((ch - 'a' + key) % 26 + 'a');
        } else {
            result += ch; 
        }
    }
    return result;
}

string decrypt(string text, int key) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        if (isupper(ch)) {
            result += char((ch - 'A' - key + 26) % 26 + 'A');
        } else if (islower(ch)) {
            result += char((ch - 'a' - key + 26) % 26 + 'a');
        } else {
            result += ch;
        }
    }
    return result;
}

int main() {
    int choice, key;
    string text;
    label:
    cout << "Caesar Cipher Menu:\n";
    cout << "1. Encrypt\n";
    cout << "2. Decrypt\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
	
    switch (choice) {
        case 1:
        	cin.ignore(); 
		    cout << "Enter the text: ";
		    getline(cin, text);
		    cout << "Enter the key: ";
	    	cin >> key;
            cout << "Encrypted Text: " << encrypt(text, key) << endl<<endl;
            break;
        case 2:
        	cin.ignore(); 
		    cout << "Enter the text: ";
		    getline(cin, text);
		    cout << "Enter the key: ";
    		cin >> key;
            cout << "Decrypted Text: " << decrypt(text, key) << endl<<endl;
            break;
        case 3: 
        	return 0;
        default:
            cout << "Invalid choice! Please enter 1, 2 or 3.\n"<<endl;
    }
    goto label;
    
}

