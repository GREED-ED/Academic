//Create two classes named mammals and marine
#include<iostream>
using namespace std;
class Mammal{
    public:
        void print(){
        cout<<"I am Mammal"<<endl;
        }
};
class Marine {
    public:
        void print(){
        cout<<"I am marine animal"<<endl;
        }
};
class Bluewhale : public Mammal, public Marine{
    public:
        void print(){
        cout<<"I belong to both categories"<<endl;
        }
};
int main (){
    Mammal m;
    Marine u;
    Bluewhale b;
    m.print();
    u.print();
    b.print();
    b.Mammal::print();
    b.Marine::print();
    return 0;
}
