//example of tellg(), tellp(), seekg(), seekp()
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream a;
    a.open("test.txt");
    a.seekp(10);
    a<<"text is moved 'n' space towards right "<<endl;
    a.close();
    return 0;
}
