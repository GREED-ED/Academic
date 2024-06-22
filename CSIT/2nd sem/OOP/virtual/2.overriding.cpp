//to illustrate concept of function overriding
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Hello!"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout<<"Namaste!"<<endl;
    }
};
int main(){
    B b;
    b.show();
    return 0;
}