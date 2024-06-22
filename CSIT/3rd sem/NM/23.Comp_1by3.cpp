#include <iostream>
#include <cmath>

#define f(x) 1/(1+x*x)

using namespace std;

int main() {
    int i, n;
    float a, b, h, sum = 0.0, ics = 0.0;

    cout << "Enter the initial value of x: ";
    cin >> a;
    cout << "Enter the final value of x: ";
    cin >> b;
    cout << "Enter the number of even segments : ";
    cin >> n;

    if (n % 2 != 0) {
        cout << "Number of segments must be even." << endl;
        return 1;
    }

    h = (b - a) / n;
    sum = f(a) + f(b);

    for (i = 1; i < n; i++) {
        if (i % 2 == 0) {
            sum += 2 * f(a + i * h);
        } else {
            sum += 4 * f(a + i * h);
        }
    }

    ics = sum * h / 3.0;

    cout << "The integration value using composite 1/3 Simpson's' = " << ics << endl;

    return 0;
}

