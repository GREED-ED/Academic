#include <iostream>
#include <cmath>

#define y1(x) (2 + (x) - 2.0/3 * pow((x), 3))
#define y2(x) (2 + (x) - pow((x), 2) - 2.0/3 * pow((x), 3) + pow((x), 4) / 4)
#define y3(x) (2 + (x) - pow((x), 2) - pow((x), 4) / 3 - pow((x), 5) / 15)
using namespace std;
int main() {
    float x, x0, y0, y;
    cout << "Enter initial values of x and y: ";
    cin >> x0 >> y0;
    cout << "Enter x: ";
    cin >> x;
    y = y0 + y1(x); 
    y = y0 + y2(x); 
    y = y0 + y3(x);
    cout << "value at x = " << x << " is " << y << endl;
    return 0;
}

