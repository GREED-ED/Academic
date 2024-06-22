//to find the factorial of an input number using recursive function. 
#include <iostream>
using namespace std;
// Recursive function to calculate factorial
int factorial(int n) 
{
    // Base case: factorial of 0 is 1
    if (n == 0) 
        return 1;
    // Recursive case: factorial of n is n times factorial of (n-1)
    else
        return n * factorial(n - 1);
}

int main() 
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\t   Factorial"<<endl;
    cout<<"\t\t************************************"<<endl;
    int n, r;
    int num;
    // Input the number for which factorial is to be found
    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Check if the input is non-negative
    if (num < 0)
        cout << "Factorial is undefined for negative numbers." <<endl;
    else 
    {
        // Calculate and display the factorial
        int result = factorial(num);
        cout << "Factorial of " << num << " is " << result <<endl;
    }
    return 0;
}
