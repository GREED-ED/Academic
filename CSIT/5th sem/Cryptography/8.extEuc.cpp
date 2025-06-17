#include <iostream>
using namespace std;

int extendedEuclidean(int a, int b, int &x, int &y) {
    int x1 = 1, y1 = 0;
    int x2 = 0, y2 = 1;

    while (b != 0) {
        int q = a / b;
        int r = a % b;

        int xTemp = x1 - q * x2;
        int yTemp = y1 - q * y2;

        a = b;
        b = r;

        x1 = x2;
        x2 = xTemp;
        y1 = y2;
        y2 = yTemp;
    }

    x = x1;
    y = y1;
    return a;
}

int main() {
    int a, b, x, y;
    cout << "Enter two integers a and b: ";
    cin >> a >> b;

    int gcd = extendedEuclidean(a, b, x, y);
    cout << "GCD(" << a << ", " << b << ") = " << gcd << endl;
    cout << "Coefficients x and y such that ax + by = gcd: ";
    cout << "x = " << x << ", y = " << y << endl;

    if (gcd == 1) {
        int modInverse = (x % b + b) % b;  
        cout << "Modular inverse of " << a << " mod " << b << " = " << modInverse << endl;
    }

    return 0;
}

