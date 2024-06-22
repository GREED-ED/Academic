#include <iostream>
using namespace std;
int a3, a2, a1, a0;
double f(double x) {
    return (a3 * x * x * x + a2 * x * x + a1 * x + a0);
}
int main() {
    double h, x;  
    cout << "Enter values of a3, a2, a1, and a0: ";
    cin >> a3 >> a2 >> a1 >> a0;
    cout << "Enter value of h: ";
    cin >> h;  
    cout << "Enter value at which derivative is needed: ";
    cin >> x;  
    double d = (f(x + h) - f(x)) / h;  
    cout << "Derivative = " << d;  
    return 0; 
}

