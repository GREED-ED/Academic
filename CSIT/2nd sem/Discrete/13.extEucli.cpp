//to implement Extended Euclidean algorithm for computing GCD.
#include <iostream>
using namespace std;

int ext(int a, int b, int &x, int &y)  //function to calculate Extended Euclidean
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int gcd = ext(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

int main()
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\tExtended Euclidean algorithm"<<endl;
    cout<<"\t\t************************************"<<endl;
    int num1, num2, x, y;
    cout << "Enter two numbers to find their GCD and Bezout coefficients: ";
    cin >> num1 >> num2;
    int result = ext(num1, num2, x, y);
    cout << "GCD of " << num1 << " and " << num2 << " is " << result << endl;
    cout << "Bezout coefficients (s and t): s = " << x << ", t = " << y << endl;
    return 0;
}
