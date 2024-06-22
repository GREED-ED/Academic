#include <iostream>
#include <cmath>
using namespace std;

#define f1(x, y, z) (z)
#define f2(x, y, z) (6 * (x))

int main() {
    float xa, xb, ya, yb, xp, h, sol, error, E, g[3], v[3], gs;
    float x0, y0, z0, x, y, z, ny, nz;
    int i;

    cout << "Enter Boundary Conditions (xa ya xb yb):" << endl;
//    cout << "xa ya xb yb: ";
    cin >> xa >> ya >> xb >> yb;

    cout << "Enter x at which value is required: ";
    cin >> xp;

    cout << "Enter h: ";
    cin >> h;

    cout << "Enter precision: ";
    cin >> E;

    x = xa; y = ya;
    g[1] = z = (yb - ya) / (xb - xa);

    // First pass with initial guess g[1]
    while (x < xb) {
        ny = y + (f1(x, y, z)) * h;
        nz = z + (f2(x, y, z)) * h;
        x = x + h;
        y = ny;
        z = nz;
        if (fabs(x - xp) < 0.0001) // Using a small tolerance instead of exact comparison
            sol = y;
    }
    v[1] = y;

    // Adjusting initial guess g[2]
    if (y < yb)
        g[2] = z = 2 * g[1];
    else
        g[2] = z = 0.5 * g[1];

    // Second pass with adjusted guess g[2]
    while (x < xb) {
        ny = y + (f1(x, y, z)) * h;
        nz = z + (f2(x, y, z)) * h;
        x = x + h;
        y = ny;
        z = nz;
        if (fabs(x - xp) < 0.0001)
            sol = y;
    }

    // Iterating to refine the guess using linear interpolation
    while (true) {
        x = xa; y = ya;
        gs = z = g[2] - (v[2] - yb) / (v[2] - v[1]) * (g[2] - g[1]);
        
        while (x < xb) {
            ny = y + (f1(x, y, z)) * h;
            nz = z + (f2(x, y, z)) * h;
            x = x + h;
            y = ny;
            z = nz;
            if (fabs(x - xp) < 0.0001)
                sol = y;
        }

        error = fabs(y - yb) / y;
        v[1] = v[2];
        v[2] = y;
        g[1] = g[2];
        g[2] = gs;

        if (error < E) {
            cout << "According to shooting y(" << xp << ") = " << sol << endl;
            break;
        }
    }

    return 0;
}

