#include<iostream>
using namespace std;
class con{
    private: string a;
    public: con(){
        a="";
    }
    con operator + (con b){
        con temp;
        temp.a=a+b.a;
        return temp;
    }
    input(){
        cout<<"Enter the string: "<<endl;
        cin>>a;
    }
    show(){
        cout<<a<<endl;
    }
};
int main(){
    con c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c3.show();
    return 0;
}