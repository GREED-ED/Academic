//to find sum of two compplex number by overloading << and >>
#include <iostream>
using namespace std;
class Complex {
    private:
        float real;
        float img;

    public:
        Complex(){
            real=0;
            img =0;
        }

friend istream& operator>>(istream& in, Complex& c);
friend ostream& operator<<(ostream& out, Complex& c);

    Complex operator +( Complex& b)  {
        Complex temp;
        temp.real = real + b.real;
        temp.img = img + b.img;
        return temp;
    }
};

istream& operator>>(istream& in, Complex& c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter img part: ";
    in >> c.img;
    return in;
}
ostream& operator<<(ostream& out, Complex& c) {
    out << c.real << " + " << c.img << "i";
    return out;
}

int main() {
    Complex a, b, result;
    cout << "Enter first complex number:" << endl;
    cin >> a;
    cout << "Enter second complex number:" << endl;
    cin >> b;
    result = a + b;
    cout << "Sum of the complex numbers: " << result << endl;
    return 0;
}
