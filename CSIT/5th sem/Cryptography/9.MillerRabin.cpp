#include <iostream>
#include <cstdlib>
using namespace std;

int modPower(int base, int exp, int mod) {
    long long result = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

bool isPrime(int n, int k) {
    if (n <= 1 || n == 4)
        return false;
    if (n <= 3)
        return true;

    int d = n - 1, r = 0;
    while (d % 2 == 0) {
        d /= 2;
        r++;
    }

    for (int i = 0; i < k; i++) {
        int a = 2 + rand() % (n - 4);
        long long x = modPower(a, d, n);

        if (x == 1 || x == n - 1)
            continue;

        bool continueLoop = false;
        for (int j = 0; j < r - 1; j++) {
            x = (x * x) % n;
            if (x == n - 1) {
                continueLoop = true;
                break;
            }
        }

        if (!continueLoop)
            return false;
    }

    return true;
}

int main() {
    int n, k;
    cout << "Enter number to test: ";
    cin >> n;
    cout << "Enter number of iterations (accuracy): ";
    cin >> k;

    if (isPrime(n, k))
        cout << n << " is probably prime.\n";
    else
        cout << n << " is composite.\n";

    return 0;
}

