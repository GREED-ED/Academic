#include <iostream>
#include <cmath>

#define f(x) (x*x*x)+2*(x)+1

using namespace std;

int main() {
    float a, b, h, Trp;

    cout << "Enter Lower limit of X: ";
    cin >> a;
    cout << "Enter Upper limit of X: ";
    cin >> b;

    h = (b - a) ;
    Trp = (h/2) * (f(a) + f(b));

    cout << "The integration value using trapezoidal: " << Trp << endl;

    return 0;
}

