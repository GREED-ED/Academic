// Create a class named 'Programming' while creating an object of a class, if nothing passed to it, then print message "I love C++". If some string is passed, then print the passed string in place of C++ i.e., print "I love (your passed string)".
#include<iostream>
using namespace std;
class Programming
{
private:
    string name;
public:
    Programming(){
        cout<<"I love C++"<<endl;
    }
    Programming(string name){
        cout<<"I love "<<name<<endl;
    }
};

int main() {
    string name;
    cout <<"Enter the thing you love: ";
    getline(cin,name);
    if (name.length() >1) {
    Programming Programming( name );
	} 
    else {
    Programming ();
	}
    return 0;
}
