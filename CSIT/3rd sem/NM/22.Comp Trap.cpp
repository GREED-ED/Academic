#include <iostream>
#include <cmath>

#define f(x) (3*x*x) + 2*x -5

using namespace std;

int main() {
    int i, n;
    float a, b, h, s = 0, comp = 0, k;

    cout << "Enter the initial value of x: ";
    cin >> a;
    cout << "Enter the final value of x: ";
    cin >> b;
    cout << "Enter the segment number: ";
    cin >> n;

    h = (b - a) / n;
    s = f(a) + f(b);

    for (i = 1; i <= n - 1; i++){
        k=a + i * h;
		s = s + 2*(f(k));
	}

    comp = s * h / 2.0;

    cout << "The integration value using composite trapezoidal= " << comp << endl;

    return 0;
}

