#include <iostream>
#include <cmath>

#define f(x) (x)*(x)*(x)+3*x

using namespace std;

int main() {
    float a, b, h, sum = 0.0, It = 0.0;

    cout << "Enter the initial value of x: ";
    cin >> a;
    cout << "Enter the final value of x: ";
    cin >> b;

    h = (b - a) / 3;  // h is the step size for Simpson's 3/8 rule

    sum = f(a) + f(b) + 3 * (f(a + h) + f(a + 2 * h));

    It = (3 * h / 8) * sum;

    cout << "The integration value using 3/8 Simpson's = " << It << endl;

    return 0;
}

