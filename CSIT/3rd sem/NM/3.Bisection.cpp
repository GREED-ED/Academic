#include <iostream>
#include <cmath>
using namespace std;
int a3, a2, a1, a0;
float f(float x) {
    return (a3 * x * x * x + a2 * x * x + a1 * x + a0);
}
int main() {
    float xl, xm, xu, fxl, fxm, fxu, E, Era;
    cout << "Enter the coefficients of a3, a2, a1, and a0: \n";
    cin >> a3 >> a2 >> a1 >> a0;
    cout << "Enter initial bracket and E: \n";
    cin >> xl >> xu >> E;
    fxl = f(xl);
    fxu = f(xu);
    if ((fxl * fxu) > 0) {
        cout << "Invalid input \n";
    } else {
        while (true) {
            xm = (xl + xu) / 2;
            fxm = f(xm);
            if ((fxl * fxm) == 0)
                cout << "Root = " << xm << "\n";
            else if ((fxl * fxm) < 0)
                xu = xm;
            else
                xl = xm;
            Era = (xu - xl) / xu;
            if (Era < E) {
                cout << "Root = " << xm << "\n";
                break;
            }
        }
    }
    return 0;
}

