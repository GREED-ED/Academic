#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    float val, x[10], fx[10], fd[10], h, s1, s2, x1, x2, a, b, c;

    cout << "Enter the number of points: ";
    cin >> n;

    cout << "Enter values of x and f(x):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> fx[i];
    }

    h = x[1] - x[0];

    // Calculation of forward differences
    for (int i = 0; i < n; i++) {
        fd[i] = fx[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            fd[j] = fd[j] - fd[j - 1];
        }
    }

    a = 0.5 * fd[3];
    b = fd[2] - fd[3];
    c = fd[1] - 0.5 * fd[2] + (1.0 / 3.0) * fd[3];

    // solving as² + bs + c = 0
    s1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    s2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    x1 = x[0] + s1 * h;
    x2 = x[0] + s2 * h;

    // Determining the point of maxima or minima
    val = (fd[2] + (6 * s1 - 6) * (fd[3]) / 6) / (h * h);
    if (val < 0)
        cout << "Maxima exists at x = " << x1 << endl;
    else
        cout << "Minima exists at x = " << x1 << endl;

    val = (fd[2] + (6 * s2 - 6) * (fd[3]) / 6) / (h * h);
    if (val < 0)
        cout << "Maxima exists at x = " << x2 << endl;
    else
        cout << "Minima exists at x = " << x2 << endl;

    return 0;
}

