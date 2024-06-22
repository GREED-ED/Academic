//to write 1-100 in data file NOTES.TXT
#include<fstream>
using namespace std;
int main(){
    ofstream print("NOTES.TXT");
    for(int i=1;i<=100;i++){
        print<<i<<endl;
    }
    print.close();
    return 0;
}