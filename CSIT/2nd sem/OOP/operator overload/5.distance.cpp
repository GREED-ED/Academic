#include<iostream>
using namespace std;
class distance{
    private: int value;
    public: 
    distance(int val){
        value=val;
    }
    distance operator <= (distance other){
        if (value > other.value)
        {
            return distance(value);
        }
        else {
            return distance(other.value);
        }
        int input(){
            return value;
        }   
    }
};
int main(){
    distance d;
    distance num(5);
    distance num(10);
    distance result: = num1 <= num2;
    cout<<"The greater number is ">>result.input()<<endl;
    return 0;
}