#include <iostream>
#include <cmath>
#define f(x, y) (2.0 * (y) / (x))
using namespace std;
int main() {
    int i, n;
    float x, y, xp, h;
    float m1, m2, m3, m4;
    cout << "Input initial value of x and y: ";
    cin >> x >> y;
    cout << "Input x value at which Y is required: ";
    cin >> xp;
    cout << "Input step size: ";
    cin >> h;
    n = (xp - x) / h + 0.5;
//    cout << "x \t y " << endl;
    for (i = 1; i <= n; i++) {
        m1 = f(x, y);
        m2 = f(x + 0.5 * h, y + (m1 * h * 0.5));
        m3 = f(x + 0.5 * h, y + (m2 * h * 0.5));
        m4 = f(x + h, y + m3 * h);
        x = x + h;
        y = y + ((m1 + 2.0 * m2 + 2.0 * m3 + m4) * h) / 6.0;
//        cout <<  x << " \t " << y << endl;
    }
    cout << "Value of y at xp = " << xp << " is " << y << endl;
    return 0;
}

