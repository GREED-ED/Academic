#include <iostream>
#include <cmath>
using namespace std;

int modPower(int g, int x, int n) {
    int result = 1;
    for (int i = 0; i < x; i++) {
        result = (result * g) % n;
    }
    return result;
}

int discreteLogarithm(int g, int y, int n) {
    for (int x = 0; x < n; x++) {
        if (modPower(g, x, n) == y) {
            return x;
        }
    }
    return -1;
}

int main() {
    int g, y, n;
    cout << "Enter the base (g): ";
    cin >> g;
    cout << "Enter the result (y): ";
    cin >> y;
    cout << "Enter the modulus (n): ";
    cin >> n;

    int x = discreteLogarithm(g, y, n);
    if (x == -1) {
        cout << "No solution found." << endl;
    } else {
        cout << "Discrete logarithm x: " << x << endl;
    }

    return 0;
}

