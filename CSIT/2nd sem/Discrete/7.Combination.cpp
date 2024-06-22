//to find the combination by asking the value of n and r from user. 
#include <iostream>
using namespace std;
int factorial(int n) 
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int nCr(int n, int r)   //function to calculate Combination
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() 
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\t   Combination"<<endl;
    cout<<"\t\t************************************"<<endl;
    int n, r;

    // Take input for n and r
    cout << "Enter the Value of n and r for Combination: ";
    cin >> n >> r;
    cout << n << "C" << r << " = " << nCr(n, r) <<endl;  //calling combination function
    return 0;
}
