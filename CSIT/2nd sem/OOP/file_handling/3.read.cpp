//read from OUT.TXT and count number of alphabet
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("OUT.txt");
    char ch;
    int count = 0;
    if (!fin) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    while(fin>>ch){
        cout<<ch;
        if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
        {
            count++;
        }
        }
    cout<<endl<<"no. of alphabets are "<<count;
    fin.close();
    return 0;
}
