//to write and read values [use fstream class]
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream write("READ&WRITE.TXT",ios::app);
    if(write.is_open()){
        int num1 = 32;
        double num2 = 3.2;
        char chr = 'A';
        
        write << num1 <<num2<<chr;
        //write << num2 <<endl;
        //write <<chr <<endl;
        write.close();
        cout<<"Data is written"<<endl;
    }
    else{
        cout<<"Error in opening file";
        return 1;
    }
    ifstream read("READ&WRITE.TXT");
    if(read.is_open()){
        int num1;
        double num2 ;
        char chr;
        
        read >> num1 >>num2>>chr;
        //read >> num2;
        //read >>chr;

    cout << "Read data from file:" << endl;
        cout << "Integer: " << num1 << endl;
        cout << "Double: " << num2 << endl;
        cout << "Character: " << chr << endl;
    
    read.close();
    }
    else{
        cout<<"Error in opening file";
        return 1;
    }
}