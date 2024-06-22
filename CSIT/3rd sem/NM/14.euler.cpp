#include <iostream>
#include <cmath>
#define f(x, y) (2 * (y) / (x))
using namespace std;
int main() {
    int i, n;
    float x, y, h, xp, dy;
    cout << "Input initial value of x and y:" << endl;
    cin >> x >> y;
    cout << "Input value of x at which y is required: ";
    cin >> xp;
    cout << "Input step size: ";
    cin >> h;
    n =(xp - x) / h + 0.5;
    cout << "x \t y " << endl;
    for (i = 1; i <= n; i++) {
        dy = h * f(x, y);
        x = x + h;
        y = y + dy;
        cout <<  x << " \t " << y << endl;
    }
    cout << "\nValue of y at x = " << xp << " is " << y << endl;
    return 0;
}

