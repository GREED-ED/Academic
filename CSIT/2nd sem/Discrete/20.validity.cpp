//to check the validity of arguments using truth tables.
#include <iostream>
using namespace std;

bool originalExpression(bool A, bool B) {
    return !(A && B);
}

bool demorganEquivalent(bool A, bool B) {
    return (!A || !B);
}

int main() {
    cout << "******************************************" << endl;
    cout << "Validation Check for De Morgan's Theorem:" << endl;
    cout << "******************************************\n" << endl;
    cout << "A\tB    !(A AND B)    (!A OR !B)" << endl;
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            bool result1 = originalExpression(A, B);
            bool result2 = demorganEquivalent(A, B);
            cout << A << "\t" << B << "\t" << result1 << "\t\t" << result2 << endl;
            if (result1 != result2) {
                cout << "De Morgan's Theorem is not satisfied for A=" << A << " and B=" << B << endl;
                return 1; // Exit with an error code
            }
        }
    }
    cout << "De Morgan's Theorem holds for all input combinations.\nThus, the argument is valid and is proven using the truth table." << endl;
    return 0;
}
