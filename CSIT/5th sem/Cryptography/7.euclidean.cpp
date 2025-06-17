#include <iostream>
using namespace std;

int euclideanGCD(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two positive integers (a and b): ";
    cin >> a >> b;

    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int gcd = euclideanGCD(a, b);
    cout << "GCD(" << a << ", " << b << ") = " << gcd << endl;

    return 0;
}

