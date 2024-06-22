//to construct the truth table of Disjunction. 
#include <iostream>
using namespace std;

int main()
{
    cout<<"***********************************************"<<endl;
    cout << "Truth Table for Disjunction (OR) Operator:" << endl;
    cout<<"***********************************************"<<endl;
    cout << "X\tY\tResult" << endl;
    cout << "-----------------------------------------" << endl;

    // Iterate through all possible combinations of true and false (0 and 1)
    for (int X = 0; X <= 1; X++)
    {
        for (int Y = 0; Y <= 1; Y++)
        {
            // Calculate the result of the Disjunction operation
            bool result = X || Y;
            // Print the truth table row
            cout << X << "\t" << Y << "\t" << result << endl;
        }
    }
    return 0;
}
