// to create a binary file and write data into it.
#include<iostream>
#include<fstream>
using namespace std;
class A
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }
};
int main()
{
    A m;
    m.getdata();
    ofstream a;
    a.open("Binary.txt");
    a.write((char*)&m, sizeof(m));
    a.close();
    return 0;
}