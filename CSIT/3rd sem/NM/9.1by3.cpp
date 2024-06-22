#include <iostream>
#include <cmath>
using namespace std;
float f(float n) {
    return sqrt(1 - n * n);
}
int main() {
    float h;
    float x0, x2;
   	cout << "Enter upper limit and lower limit: ";
    cin >> x2 >> x0;
    h = (x2 - x0) / 2;
    float x1 = x0 + h;
    float v = (h / 3) * (f(x0) + 4 * f(x1) + f(x2));
    cout << "Integration = " << v;
    return 0;
}

