//example of tellg(), tellp(), seekg(), seekp()
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b;
    ifstream a;
    a.open("test.txt",ios::ate);
    b=a.tellg();
    cout<<"Tellg open and seek to end of file. So position is:"<<b<<endl;
    a.close();
    return 0;
}