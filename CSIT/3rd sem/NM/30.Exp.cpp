#include <iostream>
#include <cmath>
#define S 50

using namespace std;

int main() {
    int n, i;
    float x[S], y[S], sumX = 0, sumX2 = 0, sumlnY = 0, sumXlnY = 0, a, b;

    cout << "Number of data points: ";
    cin >> n;
    cout << "Enter data:\n";
    for (i = 0; i < n; i++) {
    	cout << "x[" << i +1 << "] and "<< "y[" << i +1 << "] = ";
        cin >> x[i] >> y[i];
//        cout << "x[" << i + 1 << "] = ";
//        cin >> x[i];
//        cout << "y[" << i + 1 << "] = ";
//        cin >> y[i];
    }

    for (i = 0; i < n; i++) {
        sumX += x[i];
        sumX2 += x[i] * x[i];
        sumlnY += log(y[i]);
        sumXlnY += x[i] * log(y[i]);
    }

    b = (n * sumXlnY - sumX * sumlnY) / (n * sumX2 - sumX * sumX);
    a = exp((sumlnY - b * sumX) / n);

    cout << "Values are: a = " << a << " and b = " << b << endl;
    cout << "Equation of best fit is: y = " << a << " * exp(" << b << " * x)" << endl;

    return 0;
}

