#include <iostream>
using namespace std;

int encrypt(int message, int key) {
    return (message + key) % 256;
}
int decrypt(int message, int key) {
    return (message - key + 256) % 256;
}

int main() {
    int USER1Key, USER2Key, eveKey;
    int message;

    cout << "Enter USER1's secret key: ";
    cin >> USER1Key;
    cout << "Enter USER2's secret key: ";
    cin >> USER2Key;
    cout << "Enter Eve's key (attacker): ";
    cin >> eveKey;
    cout << "Enter the message to be sent (0-255): ";
    cin >> message;

    int encryptedByUSER1 = encrypt(message, USER1Key);
    int eveDecrypted = decrypt(encryptedByUSER1, eveKey);
    int eveModifiedMessage = (eveDecrypted + 50) % 256;
    int sentToUSER2 = encrypt(eveModifiedMessage, USER2Key);
    int decryptedByUSER2 = decrypt(sentToUSER2, USER2Key);

    cout << "Message encrypted by USER1: " << encryptedByUSER1 << endl;
    cout << "Eve decrypts and reads: " << eveDecrypted << endl;
    cout << "Eve modifies and re-encrypts: " << sentToUSER2 << endl;
    cout << "Message decrypted by USER2: " << decryptedByUSER2 << endl;

    return 0;
}

