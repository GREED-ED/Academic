#include<iostream>
using namespace std;
class fruit{
    public:
        int count;
    void show(){
        cout <<count <<endl;
        }
};

class mango;
class apple: public fruit{
    public:
        apple(int a){
            count=a;
            }
    friend int sum (apple x, mango y);
};

class mango:public fruit{
    public:
    mango (int a){
        count=a;
        }
    friend int sum (apple x, mango y);
};

int sum(apple x, mango y){
    return (x.count+y .count);
}

int main()
{
    apple a(20);
    mango m(54);
    a.show();
    m.show();
    cout<<sum(a,m);
    return 0;
}