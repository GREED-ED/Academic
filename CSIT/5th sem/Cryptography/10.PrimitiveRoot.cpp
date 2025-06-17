#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int modPower(int x, int y, int p) {
    long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1; 
        x = (x * x) % p;
    }
    return res;
}

bool isPrimitiveRoot(int g, int n) {
    bool visited[n] = {false};
    for (int power = 1; power < n; power++) {
        int res = modPower(g, power, n);
        if (visited[res])
            return false;
        visited[res] = true;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a prime number n: ";
    cin >> n;
    
    if (!isPrime(n)) {
        cout << n << " is not prime, no primitive roots exist!" << endl;
        return 0;
    }
    
    cout << "Primitive roots of " << n << " are: ";
    for (int g = 2; g < n; g++) {
        if (isPrimitiveRoot(g, n)) {
            cout << g << " ";
        }
    }
    cout << endl;

    return 0;
}

