#include<iostream>
using namespace std;
class frn{
    private: int real,img;
    public:
    frn(){
        real=0;
        img=0;
    }
    input(){
        cout<<"Enter the value of Real and Imaginary part"<<endl;
        cin>>real>>img;
    }
    show(){
        cout<<"After Addition: "<<real<<" + i"<<img<<endl;
    }
    friend frn operator +(frn a,frn b);
};
frn operator +(frn a, frn b){
    frn temp;
    temp.real = a.real+b.real;
    temp.img = a.img+b.img;
    return temp;
}
int main(){
    frn a,b,c;
    a.input();
    b.input();
    c=a+b;
    c.show();
    return 0;
}