//Make a class named Fruit with data member to calculate no. of fruits
#include<iostream>
using namespace std;
class Fruit{
    private:
        int numFruits;
    public:
        Fruit(int num){
        numFruits= num;
        }
        int input() {
        return numFruits;
        }
};
class Mangoes: public Fruit{
    public:
        Mangoes(int num):
    Fruit(num){}
    void print(){
        cout<<"Number of mangoes: "<<input()<<endl;
        }
};
class Apples: public Fruit{
    public:
    Apples(int num):
    Fruit(num){}
    void print(){
        cout<<"Number of apples: "<<input()<<endl;
        }
};
int main (){
    Mangoes m(5);
    Apples a(3);
    m.print();
    a.print();
    int total= a.input() + m.input();
    cout<<"The Total number of fruits that we have in basket is: "<<total<<endl;
    return 0;
}