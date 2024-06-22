#include <iostream>
using namespace std;
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
int main() {
    float xp, h, s, value, pre, t1, t2;
    int n, i, j, k;
    cout << "Enter number of points: ";
    cin >> n;
    cout << "Enter point at which derivative is needed: ";
    cin >> xp;
    float x[n], fx[n], fd[n];
    cout << "\nEnter the data points:\n";
    for (i = 0; i < n; i++) {
        cout << "\nPoint " << i << ":\n";
        cout << "Enter x: ";
        cin >> x[i];
        cout << "Enter fx: ";
        cin >> fx[i];
    }
    h = x[1] - x[0];
    s = (xp - x[0]) / h;
    for (i = 0; i < n; i++) {
        fd[i] = fx[i];
    }
    for (i = 0; i < n; i++) {
        for (j = n - 1; j >= i + 1; j--) {
            fd[j] -= fd[j - 1];
        }
    }
    value = fd[1];
    pre = 1;
    for (i = 2; i <= n - 1; i++) {
        t1 = 1;
        for (k = 2; k <= i; k++) {
            t1 *= (s - k + 2);
        }
        t2 = t2 + (s - i + 1) * pre;
        pre = t1 + t2;
        value = value + (fd[i] * (t1 + t2)) / fact(i);
    }
    value = value / h;
    cout << "\nvalue of first derivative = " << value;
    return 0;
}

