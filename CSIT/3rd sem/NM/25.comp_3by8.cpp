#include <iostream>
#include <cmath>

#define f(x) (x)*(x)*(x)+3*(x)*(x)

using namespace std;

int main() {
    int i, n;
    float a, b, h, sum, ics;

    cout << "Enter the initial value of x: ";
    cin >> a;
    cout << "Enter the final value of x: ";
    cin >> b;
    cout << "Enter the number of segments (multiple of 3): ";
    cin >> n;

    if (n % 3 != 0) {
        cout << "Number of segments must be a multiple of 3." << endl;
        return 1;
    }

    h = (b - a) / n;
    sum = f(a) + f(b);

    for (i = 1; i <= n-1; i++) {
        if (i % 3 == 0) {
            sum += 2 * f(a + i * h);
        } else {
            sum += 3 * f(a + i * h);
        }
    }

    ics = (3 * h / 8) * sum;

    cout << "The integration value using composite 3/8 Simpson's = " << ics << endl;

    return 0;
}

