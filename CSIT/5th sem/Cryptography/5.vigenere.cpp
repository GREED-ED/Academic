#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string processText(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) {
            result += toupper(text[i]);
        }
    }
    return result;
}

string extendKey(string key, int length) {
    string newKey = "";
    int k = 0;
    for (int i = 0; i < length; i++) {
        newKey += key[k];
        k++;
        if (k == key.length()) {
            k = 0;
        }
    }
    return newKey;
}

string encrypt(string plaintext, string key) {
    string cipher = "";
    for (int i = 0; i < plaintext.length(); i++) {
        char p = plaintext[i] - 'A';
        char k = key[i] - 'A';
        char c = (p + k) % 26 + 'A';
        cipher += c;
    }
    return cipher;
}

string decrypt(string ciphertext, string key) {
    string plain = "";
    for (int i = 0; i < ciphertext.length(); i++) {
        char c = ciphertext[i] - 'A';
        char k = key[i] - 'A';
        char p = (c - k + 26) % 26 + 'A';
        plain += p;
    }
    return plain;
}

int main() {
    int keySize, textSize, choice;
    string key, plaintext, ciphertext;
	label:
    cout << "=== Vigenère Cipher ===\n";
    cout << "1. Encrypt\n2. Decrypt\n3. Exit\nEnter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
			cout << "Enter key size: ";
	        cin >> keySize;
	        cout << "Enter key: ";
	        cin >> key;
	
	        cout << "Enter plaintext size (without spaces): ";
	        cin >> textSize;
	        cin.ignore();
	        cout << "Enter plaintext: ";
	        getline(cin, plaintext);
	
	        key = processText(key);
	        plaintext = processText(plaintext);
	        key = extendKey(key, plaintext.length());
	
	        ciphertext = encrypt(plaintext, key);
	        cout << "Encrypted text: " << ciphertext << endl;
	        break;
	        
    	case 2:
	        cout << "Enter key size: ";
	        cin >> keySize;
	        cout << "Enter key: ";
	        cin >> key;
	
	        cout << "Enter ciphertext size: ";
	        cin >> textSize;
	        cin.ignore();
	        cout << "Enter ciphertext: ";
	        getline(cin, ciphertext);
	
	        key = processText(key);
	        ciphertext = processText(ciphertext);
	        key = extendKey(key, ciphertext.length());
	
	        plaintext = decrypt(ciphertext, key);
	        cout << "Decrypted text: " << plaintext << endl;
	        break;

    	case 3:
        	cout << "Exiting...\n";
        	return 0; 
        	
    	case 4:
        	cout << "Invalid choice!\n";
    	}
	goto label;
    return 0;
}

