#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, v, p;
    int i, j, n;

    cout << "Enter the number of points: ";
    cin >> n;

    cout << "Enter value of x: ";
    cin >> x;

    float xi[n], dd[n], fx[n];

    for (i = 0; i < n; i++) {
        //cout << "\nPoint " << i + 1 << ":\n";
        cout << "\nEnter x"<<i+1<<": ";
        cin >> xi[i];
        cout << "Enter fx"<<i+1<<": ";
        cin >> fx[i];
    }    

    for (i = 0; i < n; i++) {
        dd[i] = fx[i];
    }
    
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            dd[j] = (dd[j] - dd[j - 1]) / (xi[j] - xi[j - 1 - i]);
        }
    }

    v = 0;
    p = 1;

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            p = p * (x - xi[j]);
        }
        v = v + dd[i] * p;
        p = 1;
    }

    cout << "v = " << v;

    return 0;
}

