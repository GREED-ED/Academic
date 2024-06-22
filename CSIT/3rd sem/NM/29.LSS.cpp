#include <iostream>
#include <cmath>
using namespace std;

#define MAX 10

int main() {
    int i, n;
    float a0, a1;
    float x[MAX], y[MAX], sumx = 0.0, sumy = 0.0, sumxy = 0.0, sumxsq = 0.0;

    cout << "Input the number of data points: ";
    cin >> n;

    if (n > MAX) {
        cout << "Number of data points exceeds the maximum allowed (" << MAX << ")." << endl;
        return 1;
    }

    cout << "Enter the data sets:" << endl;
    for (i = 0; i < n; i++) {
        cout << "x[" << i << "] and "<< "y[" << i << "] = ";
        cin >> x[i] >> y[i];
//        cout << "y[" << i << "] = ";
//        cin >> y[i];
        sumx += x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
        sumxsq += x[i] * x[i];
    }

    a0 = (sumy * sumxsq - sumx * sumxy) / (n * sumxsq - pow(sumx, 2));
    a1 = (n * sumxy - sumx * sumy) / (n * sumxsq - pow(sumx, 2));

    cout << "The equation of the line using Least square Method is:" << endl;
    cout << "y = " << a1 << "x + " << a0 << endl;

    return 0;
}

