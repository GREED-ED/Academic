#include <iostream>
using namespace std;

int eulerTotient(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

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

int main() {
    int a, n;
    cout << "Enter the base (a): ";
    cin >> a;
    cout << "Enter the modulus (n): ";
    cin >> n;

    int phi = eulerTotient(n);
    cout << "Euler's Totient Function phi(" << n << ") = " << phi << endl;

    int result = modExp(a, phi, n);
    cout << a << "^" << phi << " = " << result << " (mod " << n << ")" << endl;
    
    return 0;
}

