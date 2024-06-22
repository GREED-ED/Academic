#include <iostream>
#include <cmath>
#define F(x) (a3*x*x*x+a2*x*x+a1*x+a0)
#define FD(x) (3*a3*x*x+2*a2*x+a1)
using namespace std;
float a0, a1, a2, a3;
int main() {
    float x0, x1, fx0, fdx0, E, Era;
    cout << "Enter the coefficients a3, a2, a1, and a0: \n";
    cin >> a3 >> a2 >> a1 >> a0;
    cout << "Enter initial guess and E: \n";
    cin >> x0 >> E;
    while (true) {
        fx0 = F(x0);
        fdx0 = FD(x0);
        x1 = x0 - (fx0 / fdx0);
        Era = (x1 - x0) / x1;
        if (fabs(Era) < E) {
            cout << "Root = " << x1 << ".\n";
            break;
        }
        x0 = x1;
    }
    return 0;
}

