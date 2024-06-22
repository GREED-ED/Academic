#include <iostream>
using namespace std;
int gcd(int a, int b) // Function to compute the GCD using the Euclidean algorithm
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\tEuclidean algorithm"<<endl;
    cout<<"\t\t************************************"<<endl;
    int num1, num2;
    cout << "Enter two numbers to find their GCD: ";
    cin >> num1 >> num2;
    int result = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is " << result << endl;
    return 0;
}

