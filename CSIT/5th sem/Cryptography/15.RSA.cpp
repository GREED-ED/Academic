#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int modPower(int base, int exp, int mod) {
    int result = 1;
    base = base % mod;
    for (int i = 0; i < exp; i++) {
        result = (result * base) % mod;
    }
    return result;
}

int modInverse(int e, int phi) {
    for (int d = 1; d < phi; d++) {
        if ((d * e) % phi == 1)
            return d;
    }
    return -1;
}

int main() {
    int p, q;
    cout << "Enter two prime numbers (p and q): ";
    cin >> p >> q;

    int n = p * q;
    int phi = (p - 1) * (q - 1);

    int e;
    cout << "Enter public key exponent e (1 < e < " << phi << " and gcd(e, " << phi << ") = 1): ";
    cin >> e;

    if (gcd(e, phi) != 1) {
        cout << "Invalid e. GCD not 1. Exiting...\n";
        return 0;
    }

    int d = modInverse(e, phi);
    if (d == -1) {
        cout << "Modular inverse for e not found. Exiting...\n";
        return 0;
    }
    cout << "Public key (e, n): (" << e << ", " << n << ")\n";
    cout << "Private key (d, n): (" << d << ", " << n << ")\n";
    int message;
    cout << "Enter message to encrypt (as integer < " << n << "): ";
    cin >> message;
    
    int encrypted = modPower(message, e, n);
    cout << "Encrypted message: " << encrypted << endl;
    int decrypted = modPower(encrypted, d, n);
    cout << "Decrypted message: " << decrypted << endl;

    return 0;
}

