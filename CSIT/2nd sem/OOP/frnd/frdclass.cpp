//to show friend class
#include<iostream>
using namespace std;
class one{
    private:int x,y;
    public:
    friend class two;
};
class two
{
    public:
    void getdata(one a){
        cout<<"Enter x and y: ";
        cin>>a.x>>a.y;
        cout<<"the sum is "<<a.x+a.y;
    }
};
int main(){
    one a;
    two b;
    b.getdata(a);
    return 0;
}