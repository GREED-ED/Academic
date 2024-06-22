//example of tellg(), tellp(), seekg(), seekp()
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b;
    fstream a;
    a.open("tell.txt",ios::app);
    b=a.tellp();
    cout<<"intial position of cursor: "<<b<<endl;
    a<<"Hello";
    b=a.tellp();
    cout<<"new cursor position: "<<b<<endl;
    a.close();
    return 0;
}