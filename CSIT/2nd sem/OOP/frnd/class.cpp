//to show the classes joining the friend function 
#include<iostream>
using namespace std;
class two;
class one {
    private:int x;
    public:
    void get(){
    cout<<"Enter x:";
    cin>>x;
    }
    friend void sum(one a,two b);
};
class two{
    private:int y;
    public:
    void get(){
        cout<<"\nEnter Y:";
        cin>>y;
    }
    friend void sum(one a,two b);
};
void sum(one a,two b){
    cout<<"Sum: "<<a.x+b.y;
}
int main(){
    one a;
    two b;
    a.get();
    b.get();
    sum(a,b);
}
