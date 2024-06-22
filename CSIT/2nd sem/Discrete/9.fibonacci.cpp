//to find the nth term of a Fibonacci sequence using recursive function.
#include <iostream>
using namespace std;
int fibonacci(int n)   // Recursive function to find the nth Fibonacci number
{
    if (n <= 1) 
        return n;
    else 
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\tFibonacci sequence"<<endl;
    cout<<"\t\t************************************"<<endl;
    int n;
    cout << "Enter the value of n to find the nth Fibonacci number: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
