#include <iostream>
#include <cmath>
using namespace std;

int modExp(int base, int exp, int mod) {
    int result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

int modInverse(int a, int m) {
    int m0 = m, x0 = 0, x1 = 1;
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m; a = t;
        t = x0;
        x0 = x1 - q * x0; x1 = t;
    }
    return (x1 + m0) % m0;
}

int main() {
    int p, g, x, y, k, M;
    cout << "Enter prime number (p): ";
    cin >> p;
    cout << "Enter primitive root modulo p (g): ";
    cin >> g;
    cout << "Enter private key (x): ";
    cin >> x;

    y = modExp(g, x, p);  

    cout << "Public Key: (p=" << p << ", g=" << g << ", y=" << y << ")\n";
    cout << "Private Key: x = " << x << endl;

    cout << "\n=== Encryption ===\n";
    cout << "Enter message to encrypt (M): ";
    cin >> M;
    cout << "Enter random number k: ";
    cin >> k;
    int a = modExp(g, k, p);
    int b = (M * modExp(y, k, p)) % p;
    cout << "Encrypted message (a, b): (" << a << ", " << b << ")\n";

    cout << "\n=== Decryption ===\n";
    int s = modExp(a, x, p);
    int s_inv = modInverse(s, p);
    int decrypted = (b * s_inv) % p;
    cout << "Decrypted message: " << decrypted << endl;

    return 0;
}

