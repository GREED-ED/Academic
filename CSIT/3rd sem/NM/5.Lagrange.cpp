#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float x, v, l;
    int i, j, n;
    cout << "Enter the number of points: ";
    cin >> n;
    cout << "Enter value of x: ";
    cin >> x;
    float xi[n], L[n], fx[n];
    for (i = 0; i < n; i++) {
        //cout << "\nPoint " << i + 1 << ":\n";
        cout << "\nEnter x"<<i+1<<": ";
        cin >> xi[i];
        cout << "Enter fx"<<i+1<<": ";
        cin >> fx[i];
    }
    for (i = 0; i < n; i++) {
        l = 1.0;
        for (j = 0; j < n; j++) {
            if (j != i) {
                l = l * ((x - xi[j]) / (xi[i] - xi[j]));
            }
        }
        L[i] = l;
    }
    v = 0.0;
    for (i = 0; i < n; i++) {
        v = v + (fx[i] * L[i]);
    }
    cout << "Value of v = " << v;
    return 0;
}

