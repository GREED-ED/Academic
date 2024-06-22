#include <iostream>
#include <cmath>
#include <conio.h>

#define f(x) ((x)*(x)*(x) + 2*x)

using namespace std;

int main() {
    float a, b, x1, x2, c1=1, c2=1, z1, z2, v;

    cout << "Enter Lower & Upper Limit: ";
    cin >> a >> b;

    z1 = -0.57735;
    z2 = 0.57735;

    x1 = (b - a) / 2 * z1 + (b + a) / 2;
    x2 = (b - a) / 2 * z2 + (b + a) / 2;

    v = (b - a) / 2 * (c1 * f(x1) + c2 * f(x2));

    cout << "Integral Value using Gauss Integration = " << v << endl;
    return 0;
}

