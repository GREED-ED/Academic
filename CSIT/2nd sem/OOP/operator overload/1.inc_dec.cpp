#include<iostream>
using namespace std;
class unary{
    private: int count;
    public: 
    unary(){
        count=0;
    }
    void show(){
        cout<<count<<endl;
    }
    unary operator ++()
    {
        ++count;
        return * this;
    }
    unary operator --(){
        --count;
        return * this;
    }
};
int main(){
    unary u;
    ++u;
    u.show();
    --u;
    u.show();
}
