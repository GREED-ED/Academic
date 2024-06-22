#include <iostream>

using namespace std;

int main() {
    float sx = 0, sy = 0, sxy = 0, sx2 = 0, a, b, xi;
    int n, i;

    cout << "Enter number of points: ";
    cin >> n;

    cout << "Enter the value of x to estimate: ";
    cin >> xi;

    float x[n], y[n];

    for (i = 0; i < n; i++) {
        cout << "\nEnter x" << i + 1 << ": ";
        cin >> x[i];
        cout << "Enter fx" << i + 1 << ": ";
        cin >> y[i];
    }

    for (i = 0; i < n; i++) {
        sx += x[i];
        sy += y[i];
        sxy += x[i] * y[i];
        sx2 += x[i] * x[i];
    }

    b = ((n * sxy - (sx * sy)) / ((n * sx2) - (sx * sx)));
    a = (sy / n) - (b * sx / n);

    cout << "\nRegression equation:\ny = " << a << " + " << b << "x";
    cout << "\nf(" << xi << ") = " << (a + b * xi);

    return 0;
}

