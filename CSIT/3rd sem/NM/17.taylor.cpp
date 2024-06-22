#include <iostream>
#include <cmath>

using namespace std;

int fact(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    float x0, y0, x, y, fdy, sdy, tdy;

    cout << "Enter initial values of x and y: ";
    cin >> x0 >> y0;

    cout << "Enter x to be evaluated: ";
    cin >> x;

    fdy = x0 * x0 + y0 * y0;
    sdy = 2 * x0 + 2 * y0 * fdy;
    tdy = 2 + 2 * y0 * sdy + 2 * fdy * fdy;

    y = y0 + (x - x0) * fdy + (x - x0) * (x - x0) * sdy / fact(2) + (x - x0) * (x - x0) * (x - x0) * tdy / fact(3);

    cout << "value at x = " << x << " is " << y << endl;

    return 0;
}

