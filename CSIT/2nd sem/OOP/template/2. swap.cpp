//to  swap using template function
#include<iostream>
using namespace std;
template <class T>
T chng(T a, T b){
    T temp;
    temp = a ;
    a = b;
    b = temp; 
    cout<<"After swap"<<endl;
    cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;;
    return 0;
}
int main(){
    chng <int> (2,5);
    chng <char> ('d','k');
    return 0;
}