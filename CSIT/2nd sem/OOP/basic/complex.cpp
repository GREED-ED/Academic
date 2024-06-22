//to add complex number
#include<iostream>
using namespace std;
class complex{
    int real, img;
    public:
    void input(){
        cout<<"Enter real part: ";
        cin>> real;
        cout<<"Enter imaginary part: ";
        cin>> img;
        }
    void sum(complex a, complex b);
    void display();
};
void complex:: sum(complex a, complex b)
{
    real= a.real+b.real;
    img= a.img+b.img;
}
void complex:: display(){
    cout<<"The sum is: "<<real<<"+ i"<<img<<endl;
}

int main(){
complex a1,a2,a3;
a1.input();
a2.input();
a3.sum(a1,a2);
a3.display();
return 0;
}  