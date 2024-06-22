#include<iostream>
using namespace std;
class complex{
    private: int m,n;
    public: 
    complex(){
        m=0;
        n=0;
    }
    input(){
        cout<<"Enter the real and imaginary part of a number"<<endl;
        cin>>m>>n;
    }
    show(){
        cout<<"The value after addition is: "<<m<<" + i"<<n<<endl;
    }
    complex operator +(complex x){
        complex temp;
        temp.m=m+x.m;
        temp.n=n+x.n;
        return temp;
    }
};
int main(){
    complex M,N,X;
    M.input();
    N.input();
    X=M+N;
    X.show();
    return 0;
}