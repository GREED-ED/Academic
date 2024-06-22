// to read the contents from the binary file made in the previous Question
#include<iostream>
#include<fstream>
using namespace std;
class A
{
    int x,y;
    public:
    void showdata()
    {
        cout<<"The previous value of x and y was:"<<endl;
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main()
{
    A m;
    ifstream a;
    a.open("Binary.txt");
    a.read((char*)&m, sizeof(m));
    m.showdata();
    return 0;
}
