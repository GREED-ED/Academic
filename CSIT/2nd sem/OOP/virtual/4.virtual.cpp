//to illustrate the use of virtual function
#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout << "I am based Class" << endl;
    }
};
class B:public A{
    public:
    void show(){
        cout << "I am Derived Class" << endl;
        }
};
int main(){
    B b1;
    A *a1 = &b1;
    a1->show(); 
    return 0;
}