//example of tellg(), tellp(), seekg(), seekp()
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char x;
    ifstream a;
    a.open("test.txt");
    a.seekg(11);
    a>>x;
    cout<<"At 11th postion the character is:"<<x<<endl;
    a.close();
    return 0;
}
