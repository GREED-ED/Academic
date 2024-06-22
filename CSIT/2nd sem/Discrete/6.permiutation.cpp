//to find the permutation by asking the value n and r from user. 
#include <iostream>
using namespace std;
int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int nPr(int n, int r)  //function to calculate permutation
{
    return factorial(n) / factorial(n - r);
}

int main() 
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\t   Permutation"<<endl;
    cout<<"\t\t************************************"<<endl;
    int n, r;
    
    // Take input for n and r
    cout << "Enter the Value of n and r for Permutation: ";
    cin >> n >> r;
    cout << n << "P" << r << " = " << nPr(n, r) << endl; //calling the function
    return 0;
}
