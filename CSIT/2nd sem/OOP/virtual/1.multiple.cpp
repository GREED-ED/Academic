//to resolve ambiguity problem in multipath inheritance
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"This is class A."<<endl;
    }
};
class B{
    public:
    void show (){
        cout << "This is Class B."<<endl;
    }
};
class C:public A, public B{};

int main(){
    C c;
    c.A::show();
    c.B::show();
    return 0;
}