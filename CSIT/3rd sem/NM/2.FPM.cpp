#include <iostream>
#include <cmath>
using namespace std;
int a1, a2, a3, a0;
float f(float x) {
    return a3 * x * x * x + a2 * x * x + a1 * x + a0;
}
float g(float x) {
    return (-a0 - a3 * x * x * x - a2 * x * x) / a1;
}
int main() {
    float x0, gx0, x1, E, Era;
    int i = 1;
    cout << "Enter coefficients of each power of the variable:\n";
    cout << "In the order a3 a2 a1 a0\n";
    cin >> a3 >> a2 >> a1 >> a0;
    cout << "Enter initial guess and error precision:\n";
    cin >> x0 >> E;
    while (true) {
        x1 = g(x0);
        Era = fabs((x1 - x0) / x1);
        if (Era >= E) {
            x0 = x1;
            i++;
        } else {
            cout << "The root is " << x1 << ".\n";
            cout << "No. of iterations = " << i;
            break;
        }
    }
    return 0;
}

