#include <iostream>
using namespace std;

#define P(x) (a[4]*x*x*x*x + a[3]*x*x*x + a[2]*x*x + a[1]*x + a[0])

int main() {
    float a[5];
    float x, result;
    int n, i;

    cout << "Enter degree of polynomial: ";
    cin >> n;

    cout << "Enter coefficients:\n";
    for (i = n; i >= 0; i--) {
        cin >> a[i];
    }

    cout << "Enter the value at which to be evaluated: ";
    cin >> x;

    result = P(x);
    cout << "Value of P(" << x << ") is " << result << endl;

    return 0;
}

