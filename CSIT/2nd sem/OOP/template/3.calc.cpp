//to build simple calculator using class template
#include<iostream>
using namespace std;
template <class T>
class calculator{
    private:
    T a,b;
    public :
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }

    T multiply(T a, T b) {
        return a * b;
    }

    T divide(T a, T b) {
        if (b == 0) {
            cout << "Error: Division by zero." << endl;
            return 0; // Return 0 as an error value
        }
        return a / b;
    }
};

int main(){
    calculator<int>i;
    calculator<double>d;
    calculator<char>c;
    cout<<"Sum is: "<<c.add('A',')')<< endl;
    cout<<"Substract is: "<<d.subtract(6.5,4.4)<< endl;
    cout<<"Product is: "<<i.multiply(5,2)<< endl;
    cout<<"Divide is: "<<d.divide(9.0,5.0)<< endl;
    return 0;
}