//to show the concept of the friend function
#include<iostream>
using namespace std;
class frnd{
    private:int x,y;
    public:
    void get()
    {
        cout<<"Enter the value of x,y: ";
        cin>>x>>y;
    }
    void show()
    {
        cout<<x<<"\t"<<y<<endl;
    }
    friend void add(frnd a);
};
void add(frnd a)
{
    cout<<a.x+a.y;
}
int main()
{
    frnd a;
    a.get();
    a.show();
    add(a);
    return 0;
}
