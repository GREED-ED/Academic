#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float a3, a2, a1, a0;

float f(float x) {
    return (a3 * x * x * x + a2 * x * x + a1 * x + a0);
}

int main() {
    float x0, x1, x2, fx1, fx0, E, Era;

    cout << "Enter the coefficients of a3, a2, a1, and a0: \n";
    cin >> a3 >> a2 >> a1 >> a0;

    cout << "Enter initial bracket and E: \n";
    cin >> x1 >> x0 >> E;

    fx1 = f(x1);
    fx0 = f(x0);

    while (true) {
        x2 = x1 - ((f(x1) * (x1 - x0)) / (f(x1) - f(x0)));
        fx1 = f(x2);
        Era = fabs((x2 - x1) / x2);

        if (Era < E) {
            cout << "Root = " << x2 << "\n";
            break;
        }

        x0 = x1;
        x1 = x2;
    }

    return 0;
}

