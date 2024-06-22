#include <iostream>
#include <cmath>
#define f(x, y) (2 * (y) / (x))
using namespace std;
int main() {
    int i, n;
    float x, y, h, xp, m1, m2;
    cout << "Input initial value of x and y:" << endl;
    cin >> x >> y;
    cout << "Input value of x at which y is required: ";
    cin >> xp;
    cout << "Input step size: ";
    cin >> h;
    n = (xp - x) / h + 0.5;
    cout << "x \t y " << endl;
    for (i = 1; i <= n; i++) {
        m1 = f(x, y);
        m2 = f(x + h, y + m1 * h);
        x = x + h;
        y = y + 0.5 * h * (m1 + m2);
        cout <<  x << " \t " << y << endl;
    }
    cout << "\nValue of y at x = " << xp << " is " << y << endl;
    return 0;
}

