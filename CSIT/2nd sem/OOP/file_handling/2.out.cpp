//output the string to OUT.TXT
#include<fstream>
using namespace std;
int main(){
    ofstream out("OUT.TXT");
    string b ="Time is a great teacher but nowadays it is said as Time is Money.";
    out<<b;
    out.close();
    return 0;
}